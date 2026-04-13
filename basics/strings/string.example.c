#include <stdio.h>

int main() {
    char name[3] = "Gi"; // Always leave space for the null character '\0' at the end of the string.

    printf("Hello %s\n", name);
    return 0;
}

// What is a string in C?
// A string in C is an array of characters that ends with a null character '\0'. Truly, there is no string usage without a library 
// like <string.h>, but we can still use character arrays to represent strings. T

// The null character is used to indicate the end of the string. It is important to include the null character 
// at the end, otherwise, it may lead to undefined behavior when trying to access or manipulate the character array.
// Important: No use of & when using strings with printf or scanf, as the name of the array already represents 
// the address of the first element.

// A detail to take note, there is a certain limitation as how many characters we can store in the character array. 
// In the example above, we have a character array of size 50, which means we can store up to 49 characters plus the null character. 
// If the user types, "Gi Silva", it will only store "Gi" in the character array, and the rest will be ignored.
// This is because the scanf function stops reading input when it encounters a space character.
// To read a full name with spaces, we can use the fgets function instead of scanf, 
// which allows us to read a line of input including spaces.

// example: 


/* 
int main() {
    char name[50];

    printf("Enter full name: ");
    fgets(name, 50, stdin);

    printf("Hello %s", name);

    return 0;
} */