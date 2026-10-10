#include <stdio.h>

#define MAX 100

int main() {
    int queue[MAX], n, i;

    printf("Enter number of elements in queue (max 100): ");
    scanf("%d", &n);
    if (n < 0 || n > MAX) return 1;

    printf("Enter queue elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &queue[i]);

    printf("Queue: ");
    for (i = 0; i < n; i++)
        printf("%d ", queue[i]);
    printf("\n");

    return 0;
}