#include "setup.h"
#include "checker.h"

int main()
{
    setup();

    while(1)
    {
        typeRandMessageOnKeyPress();
        Sleep(10);
    }
}