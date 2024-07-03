#include<stdio.h>
int main()
{
    double a=10.123456789123456;
    printf("%0.15lf",a);
    return 0;
}
// if we dont mention fraction number, it will print 6 number after fraction. but if we mention 10 or 15 number print after fraction number it will work as instruction. [print("%0.15lf")]