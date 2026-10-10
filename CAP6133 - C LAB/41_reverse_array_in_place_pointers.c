#include <stdio.h>

void reverse(int *a, int n) {
    int *left = a, *right = a + n - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main() {
    int a[100], n, i;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}