#include <stdio.h>

long long power(int x, int n) {
    long long result = 1;
    int i;
    for (i = 0; i < n; i++)
        result *= x;
    return result;
}

int main() {
    int x, n;

    printf("Enter x and positive integer n: ");
    scanf("%d %d", &x, &n);

    if (n <= 0) {
        printf("n must be a positive integer.\n");
        return 1;
    }

    printf("%d^%d = %lld\n", x, n, power(x, n));
    return 0;
}