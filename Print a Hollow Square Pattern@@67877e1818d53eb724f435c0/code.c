#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < n - 2; i++) {
        printf("*");
        for (int j = 0; j < n - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    if (n > 1) {
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
