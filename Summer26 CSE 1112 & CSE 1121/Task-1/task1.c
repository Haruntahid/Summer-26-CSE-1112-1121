// 1. C Program to Find the Addition, Subtraction, Multiplication, and Division of Two Numbers

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Addition = %.2f\n", num1 + num2);
    printf("Subtraction = %.2f\n", num1 - num2);
    printf("Multiplication = %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Division = %.2f\n", num1 / num2);
    } else {
        printf("Division is not possible (Cannot divide by zero).\n");
    }

    return 0;
}