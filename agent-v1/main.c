#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "agent.h"
#include <windows.h>

int main()
{
    srand(time(NULL));

    Agent agent;

    for (int i = 0; i < 5; i++)
    {
        agent.history[i] = 0;
    }
    agent.history_index = 0;

    while (1)
    {
        perceive(&agent);
        decide(&agent);
        act(&agent);

        printf("------------------\n");
        Sleep(1000);
    }
    return 0;
}