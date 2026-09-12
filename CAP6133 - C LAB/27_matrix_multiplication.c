#include <stdio.h>

int main() {
    int a[100][100], b[100][100], c[100][100] = {0};
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix (max 100): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix (max 100): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Invalid dimensions. Columns of first must equal rows of second.\n");
        return 1;
    }
    printf("Enter first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++){
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Enter second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++){
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];

    printf("Product matrix :\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}