#include <stdio.h>

int isSorted(int age[], int n) {
    for (int i = 1; i < n; i++) {  // Corrected loop condition
        if (age[i] < age[i - 1]) {  // Check for unsorted condition
            return i;  // Return the first index where unsorted
        }
    }
    return -1;  // Return -1 if sorted
}

int main() {
    int n, i;
    scanf("%d", &n);  // Input number of elements

    int age[n];  // Declare array with size n

    for (i = 0; i < n; i++) {  // Corrected the loop condition and indexing
        scanf("%d", &age[i]);  // Input the array elements
    }

    int res = isSorted(age, n);

    if (res == -1) 
    else {
        printf("%d\n", res);
    }

    return 0;  // Return success
}

