// 2. C Program to Find the Average of Four Numbers

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, average;

    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    average = (n1 + n2 + n3 + n4) / 4;

    printf("Average = %.2f\n", average);

    return 0;
}