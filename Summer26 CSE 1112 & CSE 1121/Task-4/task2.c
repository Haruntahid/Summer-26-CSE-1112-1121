// 2. Write a C program to find the sum of the digits of a number.
#include <stdio.h>

int main(){
    int num,sum = 0,count;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num != 0){
        count = num % 10;
        sum = sum + count;
        num = num / 10;
    }

    printf("Sum of the digits: %d\n",sum);
    return 0;
}