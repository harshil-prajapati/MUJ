#include <stdio.h>

int main() {
    int n, search, i, found = 0;

    printf("Enter number of elements :");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element at %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter element to search :");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            printf("Element %d found at index %d.\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found) printf("Element %d not found.\n", search);
    return 0;
}