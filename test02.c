#include <stdio.h>

// การใช้ Standard/build-in function ใน c ต้องรู้ว่าอยู่ใน Library file (.h) อะไรแล้วต้อง #include
// ptintf("?????????????")
// scanf("??????????????")

// '?' ใน c คือตัวอักษรตัวเดียว (character)
// "???" ใน c คือข้อตวาม (ตัวอักษรตั้งแต่ 0 ตัวขึ้นไป) (string/text)

int main(){

    printf("AAAAAA");
    printf("%s BBBBBB %d", "CCC", 100); //integer(int)
    printf("XYZ %f ^_^ %1f ", 150.45, 158.45687987); //float, double
    printf("ABCD %c %s", 'A', "");

    return 0;
}