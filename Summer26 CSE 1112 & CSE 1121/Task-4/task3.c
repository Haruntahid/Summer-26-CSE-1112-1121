// 3. Write a C Program to print the sum of the following series.
//            5+10+15+20+…….+150

#include <stdio.h>


int main(){
    int i, sum = 0;

    for(i=0; i<=150; i+=5){
        sum += i;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}