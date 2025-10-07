#include <stdio.h>

int main() {
    float num3, num5;
    printf("Enter first number: ");
    scanf("%f", &num3);
    printf("Enter second number: ");
    scanf("%f", &num5);

    printf("Sum = %.2f\n", num3 + num5);
    printf("Difference = %.2f\n", num3 - num5);
    printf("Product = %.2f\n", num3 * num5);

    if (num5 != 0) {
        printf("Quotient = %.2f\n", num3 / num5);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
