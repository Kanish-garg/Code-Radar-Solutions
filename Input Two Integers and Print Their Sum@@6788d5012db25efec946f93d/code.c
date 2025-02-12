#include <stdio.h>
int main(){
    int a ;
    int b;
    int c;
    scanf("&d",&a);
    scanf("%d",&b);
    printf("%d,%d",a,b);
    c=(a+b);
    printf("Sum:%d",c);
    return 0;

}
int main() {
    int a;
    int b;
    int c;

    scanf("%d", &a);  // Correct format specifier for reading integer a
    scanf("%d", &b);  // Correct format specifier for reading integer b

    printf("%d, %d\n", a, b);  // Print a and b
    c = (a + b);  // Calculate sum of a and b
    printf("Sum: %d", c);  // Print the sum with the correct format

    return 0;
}
