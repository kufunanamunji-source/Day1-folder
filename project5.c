#include <stdio.h>
int main() {
    float num6, num8;
    char operation;
printf("Enter first number: ");
    scanf("%f", &num6);

printf("Enter second number: ");
    scanf("%f", &num8);

printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
printf("Result = %.2f\n", num6 + num8);
            break;
        case '-':
printf("Result = %.2f\n", num6 - num8);
            break;
        case '*':
printf("Result = %.2f\n", num6 * num8);
            break;
        case '/':
            if(num8 != 0)
printf("Result = %.2f\n", num6 / num8);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operation. Please choose +, -, *, or /.\n");
    }

    return 0;
}


