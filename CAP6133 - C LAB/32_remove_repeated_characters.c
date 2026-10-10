#include <stdio.h>

int main() {
    char str[500], result[500];
    int seen[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (!seen[ch]) {
            seen[ch] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("After removing repeated characters: %s\n", result);
    return 0;
}