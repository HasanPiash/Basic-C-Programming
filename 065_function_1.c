#include<stdio.h>

int sum(int x,int y) // x=20 y=25
{
    int sum=x+y;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",sum(x,y));
    return 0;
}
