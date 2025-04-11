#include <stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for(i = 1;i<=n; i++);{
        for(int j=1;j<i+1;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}