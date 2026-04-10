#include <stdio.h>

int main() {
    float height = 1.75;

    printf("Height: %f\n", height);

    return 0;
}

// %f is a format specifier used in printf to indicate that the corresponding argument is a floating-point number. 
// In this case, it will print the value of the variable 'height' which is 1.75.

// By default, %f prints six digits after the decimal point. If you want to specify a different number of digits, 
// you can use %.nf where n is the number of digits you want. For example, %.2f will print two digits after the decimal point.