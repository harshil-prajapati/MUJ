#include <stdio.h>
#include <ctype.h>

int main() {
    char str[300];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        switch (tolower((unsigned char)str[i])) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                count++;
                break;
        }
    }

    printf("Number of vowels = %d\n", count);
    return 0;
}