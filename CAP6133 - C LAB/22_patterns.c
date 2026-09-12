#include <stdio.h>

int main(void) {
    int i, j;

    printf("Pattern 1 :\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    printf("\nPattern 2 :\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    printf("\nPattern 3 :\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) printf("%d", j);
        printf("\n");
    }

    printf("\nPattern 4 :\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("%d", j);
        printf("\n");
    }

    printf("\nPattern 5 :\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) printf("%d", i);
        printf("\n");
    }

    return 0;
}