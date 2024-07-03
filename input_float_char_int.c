#include<stdio.h>
int main()
{
    int apple,banana;
    char c;
    float f;
    scanf("%d %f %c",&apple, &f, &c);
    printf("%d %0.2f %c",apple, f,c);
    return 0;
}