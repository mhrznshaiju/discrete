#include <stdio.h>
int main() {
    int A[10], B[10];
    int sizeA, sizeB;

    printf("Enter number of elements in Set A: ");
    scanf("%d", &sizeA);
    printf("Enter elements of Set A:\n");
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter number of elements in Set B: ");
    scanf("%d", &sizeB);
    printf("Enter elements of Set B:\n");
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    printf("\nCartesian Product A × B:\n");
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            printf("(%d, %d)\n", A[i], B[j]);
        }
    }

    return 0;
}

