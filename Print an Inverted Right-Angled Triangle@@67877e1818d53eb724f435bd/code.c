#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        for (int j = i; j >0;) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
