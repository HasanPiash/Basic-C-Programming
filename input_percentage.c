#include<stdio.h>
int main()
{
    int apple,banana;
    char p;
    scanf("%d%c %d%c",&apple, &p, &banana, &p);
    printf("%d%% %d%%", apple, banana);
    return 0;
}