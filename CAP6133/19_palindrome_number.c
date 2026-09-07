#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;

    printf("Enter a number : ");
    scanf("%d", &n);

    original = n;

    for (; n != 0; n = n / 10) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }

    if (original == reverse)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
