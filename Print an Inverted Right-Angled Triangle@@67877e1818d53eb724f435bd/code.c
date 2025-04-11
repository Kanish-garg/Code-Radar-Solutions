#include<stdio.h>
int main(){


int n;
int i;
scanf("%d",&n);
for (i=0;i<n+1;i++){
    for(i=i;i>0;i--){
        printf("*");
        }
        printf("\n");
}

return 0;
}
