#include <stdio.h>

int main() {
    char str[300], *start, *end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    start = str;
    end = str;

    while (*end != '\0' && *end != '\n')
        end++;
    *end = '\0';

    if (end == start) {
        printf("Reverse: \n");
        return 0;
    }

    end--;

    printf("Reverse: ");
    while (end >= start)
        putchar(*end--);
    putchar('\n');

    return 0;
}