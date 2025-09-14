/*
    - no parameter has return // ถ้ามี return จะไม่ใช่ void
    - have parameter has return
*/

#include <stdio.h>
double multiply2Number(int, double);

int sum2Number(int n1, int n2){
    return n1 + n2;
}

char* showHello(){
    return "Hello...";
}

int main(){
    int data01;
    data01 = sum2Number(10, 20);

    printf("100 + 200 = %d\n", sum2Number(100, 202) );
    printf("100 + 3 = %.4lf\n", multiply2Number(100, 3) );
    printf("%s Sombat\n", showHello() );
    printf("%d\n", data01 );
    printf("%d\n", data01 + data01 + data01 );
    return 0;
}

double multiply2Number(int n1, double n2){
    return n1 + n2;
}