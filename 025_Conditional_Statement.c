#include<stdio.h> 
int main()
{
    int x;
    scanf("%d",&x);
    int digit=x/1000;
    if(digit%2==0)
    {
        printf("EVEN Number\n");
    }
    else 
    {
        printf("ODD Number\n");
    }
    return 0;
}
