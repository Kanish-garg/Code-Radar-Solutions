#include <stdio.h>

int main() {
    char k[100];  // Declare character arrays to store strings
    char s[100];

    // Read two strings from the user
    scanf("%s", k);

    scanf("%s", s);

    // Correct format for printing strings
    printf("You entered: %s and %s\n", k, s);

    return 0;
}
