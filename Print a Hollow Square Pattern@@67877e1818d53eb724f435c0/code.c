#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Print top border
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    // Print hollow middle rows
    for (int i = 0; i < n - 2; i++) {
        printf("*");
        for (int j = 0; j < n - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // Print bottom border (only if n > 1)
    if (n > 1) {
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
