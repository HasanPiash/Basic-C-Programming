#include <stdio.h>
void odd_even(){
    int n;
    scanf("%d",&n);
    int even=0, odd=0;
    for (int i=0; i<n;i++)
    {
        int num;
        scanf("%d",&num);
        if(num%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d\n",even,odd);
}
int main(){
    odd_even();
    return 0;
}