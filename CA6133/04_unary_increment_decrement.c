#include <stdio.h>

int main(void) {
    int x = 5;

    printf("Initial x = %d\n", x);
    printf("Prefix ++x = %d\n", ++x);
    printf("Postfix x++ = %d\n", x++);
    printf("After x++  = %d\n", x);
    printf("Prefix --x = %d\n", --x);
    printf("Postfix x-- = %d\n", x--);
    printf("After x--  = %d\n", x);

    return 0;
}