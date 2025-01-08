#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk>=100)
    {
        printf("Buy Phone");
    }
    else if (tk>=50)
    {
        printf("Buy HeadPhone");
    }
    else if(tk>=20)
    {
        printf("Buy Cable");
    }
    else
    {
        printf("Limitation");
    }

    return 0;
}
