// 1. C Program to Find the Quotient and Remainder of Two Integers

#include <stdio.h>

int main() {
    int num1, num2, quotient, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}