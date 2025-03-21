#include <stdio.h>

int main() {
    double a;  // Use double for higher precision

    // Read a double value
    scanf("%lf", &a);

    // Print the value with 4 decimal places
    printf("You entered: %.4lf\n", a);

    return 0;
}

