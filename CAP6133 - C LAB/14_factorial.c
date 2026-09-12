#include <stdio.h>

int main() {
    int n, i;
    double fact = 1;

    printf("Enter a Number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        fact *= (double)i;

    printf("%d! = %lf\n", n, fact);
    return 0;
}