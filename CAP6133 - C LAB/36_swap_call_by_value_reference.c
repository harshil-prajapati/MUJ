#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside call-by-value: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before call-by-value: a = %d, b = %d\n", a, b);
    swapByValue(a, b);
    printf("After call-by-value:  a = %d, b = %d\n", a, b);

    swapByReference(&a, &b);
    printf("After call-by-reference: a = %d, b = %d\n", a, b);

    return 0;
}