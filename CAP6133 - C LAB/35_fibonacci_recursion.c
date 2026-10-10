#include <stdio.h>

unsigned long long fib(int n) {
    if (n <= 1) return (unsigned long long)n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int limit, i = 0;

    printf("Enter upper limit: ");
    scanf("%d", &limit);

    if (limit < 0) {
        printf("Enter a non-negative limit.\n");
        return 1;
    }

    printf("Fibonacci series up to %d: ", limit);
    while (fib(i) <= (unsigned long long)limit) {
        printf("%llu ", fib(i));
        i++;
        if (i > 93) break;
    }
    printf("\n");

    return 0;
}