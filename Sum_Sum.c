#include<stdio.h>
int main() {
    int N,positive=0,negative=0;
    scanf("%d",&N);
    int a[N]; 
    
    for (int i = 0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i<N; i++) {
        if(a[i]>0)
        {
            positive += a[i]; 
        }else{
            negative += a[i];
        }
    }
    
    printf("%d %d\n",positive,negative);
    return 0;

}
