#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;

    printf("Enter three integers : ");
    scanf("%d %d %d", &a, &b, &c);

    largest = smallest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    if (largest % 2 == 0)
        printf("Largest = %d (Even)\n", largest);
    else
        printf("Largest = %d (Odd)\n", largest);

    if (smallest % 2 == 0)
        printf("Smallest = %d (Even)\n", smallest);
    else
        printf("Smallest = %d (Odd)\n", smallest);

    return 0;
}