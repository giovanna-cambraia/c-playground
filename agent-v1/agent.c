#include <stdio.h>
#include "agent.h"
#include "sensors.h"

void perceive(Agent *a)
{
    a->distance = read_distance(); // get a new reading
    a->light = read_light();

    a->distance_history[a->history_index] = a->distance; // store it in the slot
    a->history_index = (a->history_index + 1) % 5; // move cursor forward (5% forces the index to wrap back to 0 after hitting 4. That's called a sliding window mechanic)
}

void update_memory(Agent *a) {
    a->distance_history[a->history_index] = a->distance;
    a->history_index = (a->history_index + 1) % HISTORY_SIZE;
}


float get_average_distance(Agent *a)
{
    float sum = 0;

    for (int i = 0; i < HISTORY_SIZE; i++)
    {
        sum += a->distance_history[i];
    }
    return sum / HISTORY_SIZE;
}

int is_distance_dropping_fast(Agent *a) {
    float first = a->distance_history[0];
    float last = a->distance_history[HISTORY_SIZE - 1];

    return (first - last) > 10;
}

/* 1v_old_code

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
} */

void decide(Agent *a) {
    float avg_distance = get_average_distance(a);
    int danger = is_distance_dropping_fast(a);

    float score = (a->distance * 0.5) +
                  (a->light * 0.3) +
                  (avg_distance * 0.2);
    if (danger) {
        a->state = ALERT;
    } else if (score < 15) {
        a->state = IDLE;
    } else {
        a->state = MOVING;
    }

    printf("Dist: %.f | Avg: %.2f | Score: %.2f\n", a->distance, avg_distance, score);
}

void act(Agent *a)
{
    switch (a->state)
    {
    case ALERT:
        printf("ALERT\n");
        break;
    case IDLE:
        printf("IDLE\n");
        break;
    case MOVING:
        printf("MOVING\n");
        break;
    }
}

// a->distance        // shorthand
// (*a).distance      // longhand: first dereference the pointer, then access field