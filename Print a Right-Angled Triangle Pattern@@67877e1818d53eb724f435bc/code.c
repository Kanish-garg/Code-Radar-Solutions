#include <stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for(i = 0;i<n; i++);{
        for(int j=i;j<i+1;j++){
            printf("* \n");
        }
        printf("\n");
    }
    return 0;
}