#include <stdio.h>

int main(void) {
    int n, i, largest, smallest;

    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element at %d: ", i);
        scanf("%d", &a[i]);
    }

    largest = smallest = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > largest) largest = a[i];
        if (a[i] < smallest) smallest = a[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    return 0;
}