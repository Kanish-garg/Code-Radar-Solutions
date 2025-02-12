#include <stdio.h>
int main(){
    char A;
    printf(A);
    scanf("%c",&A);
    printf("ASCII Value:" "%d",A);
    return 0;

}nt main() {  
    char A;  

    // Read a character from the user  
    printf("Enter a character: ");  
    scanf(" %c", &A);  // Use &A to pass the address of the variable  

    // Print the ASCII value of the character  
    printf("ASCII Value: %d\n", A);  // %d interprets the char value as an int  

    return 0;  
}  