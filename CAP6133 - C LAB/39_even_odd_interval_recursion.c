#include <stdio.h>

void printEvenOdd(int current, int end) {
    if (current > end) return;

    if (current % 2 == 0)
        printf("%d ", current);
    printEvenOdd(current + 1, end);
}

void printOdd(int current, int end) {
    if (current > end) return;

    if (current % 2 != 0)
        printf("%d ", current);
    printOdd(current + 1, end);
}

int main() {
    int start, end;

    printf("Enter interval (start end): ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("Even numbers: ");
    printEvenOdd(start, end);
    printf("\nOdd numbers: ");
    printOdd(start, end);
    printf("\n");

    return 0;
}