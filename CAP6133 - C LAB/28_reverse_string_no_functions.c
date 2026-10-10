#include <stdio.h>

int main() {
    char str[200];
    int len = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    printf("Reverse: ");
    for (i = len - 1; i >= 0; i--)
        putchar(str[i]);
    putchar('\n');

    return 0;
}