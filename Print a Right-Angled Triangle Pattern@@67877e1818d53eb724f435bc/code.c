#include <stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for(i = 1;i<=n; i++);{
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}