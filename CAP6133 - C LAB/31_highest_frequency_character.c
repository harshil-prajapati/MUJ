#include <stdio.h>

int main() {
    char str[500];
    int freq[256] = {0};
    int i, max = 0;
    unsigned char highest = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        freq[(unsigned char)str[i]]++;

    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            highest = (unsigned char)i;
        }
    }

    if (max == 0)
        printf("No character entered.\n");
    else
        printf("Highest frequency character = '%c', frequency = %d\n",
               highest, max);

    return 0;
}