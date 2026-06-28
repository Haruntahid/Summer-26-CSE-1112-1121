// 1. Write a C program to count even numbers between 20 to 100.
#include <stdio.h>

int main() {
    int i, count = 0;

    for (i = 20; i <= 100; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    printf("Number of even numbers between 2 and 100: %d\n", count);
    return 0;
}