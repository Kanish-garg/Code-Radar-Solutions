#include <stdio.h>

int main() {
    int k, j, m;
    float l;
    scanf("%d %d %d", &k, &j, &m);


    l = (k + j + m) / 3.0;  
    
    printf("Average: %.2f\n", l);

    return 0;
}
