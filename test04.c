// สร้างโปรแกรมคำนวณจำนวนเงินที่ต้องการหารกันจากการรับค่าจำนวนเงินและจำนวนคนทางแป้นพิมพ์แล้วแสดงผลที่ได้จากการคำนวณทางหน้าจอ

#include <stdio.h>

int main(){
    double money, money_share;
    int person;

    printf("-------------------\n");
    printf("\tMoney Share\n");
    printf("-------------------\n");
    printf("Input Money: ");
    scanf("%lf" , &money);
    printf("Input person: ");
    scanf("%d" , &person);
    money_share = money / person;
    printf("-------------------\n");
    printf("Money per person: %.2lf Baht\n" , money_share);
    printf("-------------------\n");

    return 0;
}