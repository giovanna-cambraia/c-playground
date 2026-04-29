#include <stdio.h>
#include "agent.h"
#include "sensors.h"

void perceive(Agent *a)
{
    a->distance = read_distance(); // get a new reading
    a->light = read_light();

    a->history[a->history_index] = a->distance; // store it in the slot
    a->history_index = (a->history_index + 1) % 5; // move cursor forward (5% forces the index to wrap back to 0 after hitting 4. That's called a sliding window mechanic)
}

float get_average_distance(Agent *a)
{
    float sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += a->history[i];
    }
    return sum / 5;
}

void decide(Agent *a)
{
    float avg = get_average_distance(a); // notices something new 

    printf("History: ");
    for(int i = 0; i < 5; i++) {
        printf("%.1f\n", a->history[i]);
    }

    if (avg < 10)
    {
        a->state = ALERT;
    }
    else if (a->light < 20)
    {
        a->state = IDLE;
    }
    else
    {
        a->state = MOVING;
    }
    printf("Distance: %.2f | Avg: %.2f\n", a->distance, avg);
}

void act(Agent *a)
{
    switch (a->state)
    {
    case ALERT:
        printf("ALERT: Obstacle too close!\n");
        break;
    case IDLE:
        printf("IDLE: Low light, staying still.\n");
        break;
    case MOVING:
        printf("MOVING: Path is clear.\n");
        break;
    }
}

// a->distance        // shorthand
// (*a).distance      // longhand: first dereference the pointer, then access field