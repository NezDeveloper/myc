/*
    - no parameter no return
    - have parameter no return
    - no parameter has return
    - have parameter has return
*/

#include <stdio.h>

void showHi(); //Declare Function

void showHello(){
    showHi();
    printf("Hello....\n");
}

int main(){
    printf("Woww....\n");
    showHello();
    showHello();
    showHi();

    return 0;
}

void showHi(){
    printf("Hi....\n");
}