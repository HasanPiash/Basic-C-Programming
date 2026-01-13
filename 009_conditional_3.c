#include<stdio.h> 
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Cox's Bazar Tour\n");
        if(tk>=10000)
        {
            printf("Saint Martin Tour\n");
        }
        else
        {
            printf("Go back\n");
        }
    }
    else
    {
        printf("No Tour\n");
    }
    return 0;
}
