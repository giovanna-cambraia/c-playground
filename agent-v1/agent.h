#ifndef AGENT_H   // "if AGENT_H has NOT been defined yet..."
#define AGENT_H 

#define HISTORY_SIZE 5

typedef enum {
    IDLE, 
    MOVING,
    ALERT
} State;

typedef struct {
    float distance;
    float light;

    float distance_history[HISTORY_SIZE]; // memory
    int history_index; // controls where to store the next value 

    State state;
} Agent;

void perceive(Agent *a);
void decide(Agent *a);
void act(Agent *a);

void update_memory(Agent *a);
float get_average_distance(Agent *a);
int is_distance_dropping_fast(Agent *a);

#endif