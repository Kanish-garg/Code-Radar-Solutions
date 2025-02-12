#include <stdio.h>  

int main() {  
    int a;  
    int b;  
    int c;  

    // Prompt user for input  
    printf("Enter two integers:\n");  
    scanf("%d", &a);  // Read integer a  
    scanf("%d", &b);  // Read integer b  

    // Print the integers  
    printf("You entered: %d, %d\n", a, b);  

    // Calculate and print the sum  
    c = a + b;  // Sum of a and b  
    printf("Sum: %d\n", c);  // Print the sum  

    return 0;  
}  