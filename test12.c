/*
    - have parameter no return 
*/

#include <stdio.h>

void avgThreeNumber(int, int, int);

void showSumNumber(int num1, int num2){
    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    avgThreeNumber(111, 222, 333);
}

int main(){
    printf("Wow.....\n");
    showSumNumber(10, 20);
    showSumNumber(100, 200);
    avgThreeNumber(10, 20, 10);

    return 0;
}

void avgThreeNumber(int n1, int n2, int n3){
    printf("Average number of %d %d %d = %.2f\n",n1, n2, n3, (n1+n2+n3)/3.0);
}