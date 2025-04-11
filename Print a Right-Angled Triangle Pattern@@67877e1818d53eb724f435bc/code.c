#include <stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for(i = 0;i<=n; i++);{
        for(int j=0;j<i+1;j++){
            printf("%d\n",i);
             printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}