#include <stdio.h>

int main() {
    int n, digit, reverse = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Reverse = %d\n", reverse);
    printf("Sum of digits = %d\n", sum);

    return 0;
}
