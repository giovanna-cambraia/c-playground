#include <stdio.h>

/* int main() {
    char city[] = "SP";

    printf("Hello %s\n", city);
    return 0;
} */

/* int main () {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s\n", name);

    return 0;
} */

int main () {
    char name[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    name[strcspn(name, "\n") = "\0"]; // the strcspn function returns the length of the initial segment of a string that does not contain any characters from a specified set.

    printf("Hello %s\n", name);

    return 0;
}