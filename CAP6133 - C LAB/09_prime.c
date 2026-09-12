#include <stdio.h>

int main() {
    int n, i, prime = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n < 2) {
        prime = 0;
    } else {
        for (i = 2; i <= n / i; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("%d is prime.\n", n);
    else
        printf("%d is not prime.\n", n);

    return 0;
}