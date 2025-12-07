#include <stdio.h>

long factRecursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * factRecursive(n - 1);
}

long factNonRecursive(int n) {
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long binomialRecursive(int n, int r) {
    return factRecursive(n) / (factRecursive(r) * factRecursive(n - r));
}

long binomialNonRecursive(int n, int r) {
    return factNonRecursive(n) / (factNonRecursive(r) * factNonRecursive(n - r));
}

int main() {
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! n must be >= r and both >= 0.\n");
        return 0;
    }

    printf("\nUsing Recursive Factorial:\n");
    printf("C(%d, %d) = %ld\n", n, r, binomialRecursive(n, r));

    printf("\nUsing Non-Recursive Factorial:\n");
    printf("C(%d, %d) = %ld\n", n, r, binomialNonRecursive(n, r));

    return 0;
}