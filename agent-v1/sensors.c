#include <stdlib.h> // gives rand()
#include <time.h> // gives time()

float read_distance() {
    return rand() % 30; // 0 - 29
}

float read_light() {
    return rand() % 100; // 0 - 99
}

// rand() generates a random integer every time you call it.
// But it's not truly random. It's pseudo-random — it follows a mathematical formula that produces numbers that look random. 