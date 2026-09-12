#include <stdio.h>

int main(void) {
    int n, i;
    double sum = 0;

    printf("Enter number of elements : ");
    scanf("%d", &n);
    double a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element at %d: ", i);
        scanf("%lf", &a[i]);
        sum += a[i];
    }

    printf("Sum = %lf\n", sum);
    return 0;
}