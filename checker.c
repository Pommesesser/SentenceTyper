//
// Created by David on 16.01.2024.
//

#include "checker.h"

void typeRandMessageOnKeyPress()
{
    if (GetAsyncKeyState(VK_RSHIFT) & 0x8000)
    {
        typeRandomMessage();
        Sleep(100);
    }
}