#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 1; i <= n; i++) {
        printf("1/%d", i);

        if (i < n)
            printf(" + ");

        sum = sum + (1.0 / i);
    }

    printf("\nSum of series = %.2f\n", sum);

    return 0;
}
