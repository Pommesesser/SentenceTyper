//
// Created by David on 16.01.2024.
//

#include "typer.h"

void pressKey(char character)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = VkKeyScanA(character);
    input.ki.dwFlags = 0;

    SendInput(1, &input, sizeof(INPUT));

    input.ki.dwFlags = KEYEVENTF_KEYUP;

    SendInput(1, &input, sizeof(INPUT));
}

void typeString(const char *string)
{
    for (int i = 0; string[i] != '\0'; ++i)
    {
        pressKey(string[i]);
    }
}

char *getRandMessage()
{
    int randomNumber = rand() % messageCount;

    return messages[randomNumber];
}

void typeRandomMessage()
{
    typeString(getRandMessage());
}