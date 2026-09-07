#include <stdio.h>

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0 / 9.0 * (f - 32);
    printf("Celsius = %.2f\n", c);

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = 9.0 / 5.0 * c + 32;
    printf("Fahrenheit = %.2f\n", f);
    return 0;
}