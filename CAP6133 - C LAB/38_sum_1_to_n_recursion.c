#include <stdio.h>

long long sumN(int n) {
    if (n <= 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n must be non-negative.\n");
        return 1;
    }

    printf("Sum from 1 to %d = %lld\n", n, sumN(n));
    return 0;
}