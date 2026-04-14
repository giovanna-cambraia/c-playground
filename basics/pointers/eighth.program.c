#include <stdio.h>

/* int main()
{
    int age = 20;

    printf("The value of int: %d\n", age);
    printf("The value of p: %p\n", &age);

    return 0;
} */

/* int main () {
    int age = 30;
    int *p = &age;

    printf("Adress of age: %p\n", &age);
    printf("Pointer value: %p\n", p);

    return 0;

} */

int main() {
    int num = 10;
    int *p = &num;

    *p = 50;

    printf("New number: %d\n", num);

    return 0;
}