#ifndef AGENT_H   // "if AGENT_H has NOT been defined yet..."
#define AGENT_H 

typedef enum {
    IDLE, 
    MOVING,
    ALERT
} State;

typedef struct {
    float distance;
    float light;

    float history[5]; // memory
    int history_index; // controls where to store the next value 

    State state;
} Agent;

void perceive(Agent *a);
void decide(Agent *a);
void act(Agent *a);

#endif