#include <stdio.h>
int isSorted(int age[], int n) {
    for (int i = 1; i < n - 1; i++) {
        if (age[i+1] > age[i]||age[i]<age[i-1]) {
            return i;
        }
    }
    }
int main(){
    int a,n,i;
    int age[a];
    scanf("%d",&n );
    for(int c=0;c<n-1;c++){
        scanf("%d",&age[i]);
    }
    if (isSorted(age,n)){
        printf("%d",i);
    }

}    
