//
// Created by David on 16.01.2024.
//

#include "setup.h"

int messageCount = 0;
char *messages[] =
        {
                "Hello",
                "Hi",
                "Servus",
                "Howdy"
        };

void countMessages()
{

    for (int i = 0; messages[i][0] != '\0'; ++i)
    {
        messageCount++;
    }
}

void setup()
{
    srand(time(NULL));
    countMessages();
}