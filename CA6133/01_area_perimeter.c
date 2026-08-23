#include <stdio.h>

int main() {
    float l, b, s, r;
    printf("Rectangle length & breadth : ");
    scanf("%f %f", &l, &b);
    printf("Rectangle area = %.2f\n", l * b);
    printf("Rectangle perimeter = %.2f\n", 2 * (l + b));

    printf("Square side : ");
    scanf("%f", &s);
    printf("Square area = %.2f\n", s * s);
    printf("Square perimeter = %.2f\n", 4 * s);

    printf("Circle radius : ");
    scanf("%f", &r);
    printf("Circle area = %.2f\n", 3.1415 * r * r);
    printf("Circle circumference = %.2f\n", 2 * 3.1415 * r);
    return 0;
}