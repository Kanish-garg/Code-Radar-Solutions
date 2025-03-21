#include <stdio.h>

int main() {
    char k[100];  // Declare character arrays to store strings
    char s[100];

    // Read two strings from the user
    printf("Enter the first string: ");
    scanf("%s", k);

    printf("Enter the second string: ");
    scanf("%s", s);

    // Correct format for printing strings
    printf("You entered: %s and %s\n", k, s);

    return 0;
}
