#include <stdio.h>

int nextCombination(int comb[], int n, int r) {
    int i = r - 1;

    // Step 1: Find the first index from the end that can be increased
    while (i >= 0 && comb[i] == n - r + i + 1) {
        i--;
    }

    // If no such index exists, we are at the last combination
    if (i < 0) {
        return 0; // No next combination
    }

    // Step 2: Increase this index and set all following numbers accordingly
    comb[i]++;
    for (int j = i + 1; j < r; j++) {
        comb[j] = comb[j - 1] + 1;
    }

    return 1; // Next combination generated
}

int main() {
    int n = 5; // Size of the set (1 to n)
    int r = 3; // Size of each combination

    // Initialize the first combination: 1, 2, ..., r
    int comb[r];
    for (int i = 0; i < r; i++) {
        comb[i] = i + 1;
    }

    printf("Initial combination: ");
    for (int i = 0; i < r; i++) {
        printf("%d ", comb[i]);
    }
    printf("\n");

    // Generate and print the next combination
    if (nextCombination(comb, n, r)) {
        printf("Next combination: ");
        for (int i = 0; i < r; i++) {
            printf("%d ", comb[i]);
        }
        printf("\n");
    } else {
        printf("No next combination (already the last one).\n");
    }

    return 0;
}

