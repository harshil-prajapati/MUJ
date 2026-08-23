#include <stdio.h>

int main() {
    int a, b, c, greatest;
    printf("Enter three integers : ");
    scanf("%d %d %d", &a, &b, &c);

    greatest = a;
    if (b > greatest) greatest = b;
    if (c > greatest) greatest = c;

    printf("Greatest number = %d\n", greatest);
    return 0;
}