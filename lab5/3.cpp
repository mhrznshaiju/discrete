#include <stdio.h>

// Function to perform modular exponentiation (a^b % mod)
long long modPow(long long a, long long b, long long mod) {
    long long result = 1;
    a = a % mod;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }

    return result;
}

// Fermat primality test
int isPrimeFermat(int n, int iterations) {
    if (n <= 1) return 0;
    if (n == 2 || n == 3) return 1;

    for (int i = 2; i < 2 + iterations; i++) {
        if (modPow(i, n - 1, n) != 1) {
            return 0; // Composite
        }
    }

    return 1; // Probably prime
}

int main() {
    int number;
    printf("Enter a number to test for primality: ");
    scanf("%d", &number);

    int iterations = 5; // Number of Fermat checks
    if (isPrimeFermat(number, iterations)) {
        printf("%d is probably prime.\n", number);
    } else {
        printf("%d is composite (not prime).\n", number);
    }

    return 0;
}

