#include<stdio.h>
int main()
{
    char c;
    int cnt[26]={0};
    while(scanf("%c",&c) != EOF)
    {
        cnt[c-'a']++;
    }

    for(char i=0;i<=25;i++)
    {
        if(cnt[i]>0)
        {
            printf("%c : %d\n",i,cnt[i]);
        }
    }
    return 0;
}
