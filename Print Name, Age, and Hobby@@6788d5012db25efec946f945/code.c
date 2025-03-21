#include <stdio.h>

int main() {
    char k[100]; 
    int a;       
    char h[100];  

    printf("Enter name, age, and hobby: ");
    scanf("%s %d %s", k, &a, h);

    printf("Name: %s\n", k);
    printf("Age: %d\n", a);
    printf("Hobby: %s\n", h);

    return 0;
}