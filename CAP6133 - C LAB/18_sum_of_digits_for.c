#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (; n != 0; n = n / 10) {
        digit = n % 10;
        sum = sum + digit;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
