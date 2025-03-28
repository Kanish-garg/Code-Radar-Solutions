#include <stdio.h>

// Function to check if the array is sorted
int isSorted(int age[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // If the current element is greater than the next, the array is not sorted
        if (age[i] > age[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int N;
    
    // Input array size
    
    scanf("%d", &N);
    
    // Declare array
    int age[N];

    // Input array elements

    for (int i = 0; i < N; i++) {
        scanf("%d", &age[i]);
    }

    // Check if array is sorted
    if (isSorted(age, N)) {
        printf("Not Sorted.\n");
    } else {
        printf("Sorted.\n");
    }

    return 0;
}



