#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "agent.h"
#include <windows.h>

int main()
{
    srand(time(NULL));

    Agent agent = {0};

    while (1)
    {
        perceive(&agent);
        update_memory(&agent);
        decide(&agent);
        act(&agent);

        printf("------------------\n");
        Sleep(1000);
    }
    return 0;
}