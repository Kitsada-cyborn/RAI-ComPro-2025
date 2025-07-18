#include<stdio.h>

int main () {
    float x;
    x = 69;
    int a = (int)x;

    printf ("Decimal : %d\n", a);
    printf ("Octal : %o\n", a);
    printf ("HexaDecimal: %x\n", a);
    return 0;
}