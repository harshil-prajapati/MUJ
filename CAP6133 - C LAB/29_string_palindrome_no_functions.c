#include <stdio.h>

int main() {
    char str[200];
    int len = 0, i, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) printf("Palindrome string.\n");
    else printf("Not a palindrome string.\n");

    return 0;
}