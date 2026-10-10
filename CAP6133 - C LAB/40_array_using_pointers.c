#include <stdio.h>

int main() {
    int a[100], n, i;
    int *p = a;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    printf("Array elements:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
    printf("\n");

    return 0;
}