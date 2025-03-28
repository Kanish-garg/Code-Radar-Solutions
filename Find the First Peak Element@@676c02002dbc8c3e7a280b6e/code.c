#include <stdio.h>
int isSorted(int age[], int n) {
    for (int i = 1; i < n - 1; i++) {
        // If the current element is greater than the next, the array is not sorted
        if (age[i+1] > age[i]||age[i]<age[i-1]) {
            return i; // Not sorted
        }
    }
