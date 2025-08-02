#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// Function to find the next permutation
int nextPermutation(int arr[], int n) {
    int i = n - 2;

    // Step 1: Find the first element from the end which is smaller than its next
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // If there is no such element, current is the last permutation
    if (i < 0) {
        return 0;  // No next permutation
    }

    // Step 2: Find the smallest element greater than arr[i] from the end
    int j = n - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }

    // Step 3: Swap them
    swap(&arr[i], &arr[j]);

    // Step 4: Reverse the remaining part
    reverse(arr, i + 1, n - 1);

    return 1; // Next permutation generated
}

// Main function
int main() {
    int arr[] = {1, 2, 3}; // Change this as needed
    int n = sizeof(arr) / sizeof(arr[0]);

    if (nextPermutation(arr, n)) {
        printf("Next permutation: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("No next permutation (already the last one).\n");
    }

    return 0;
}

