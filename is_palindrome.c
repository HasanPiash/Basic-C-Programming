#include <stdio.h>
#include <string.h>
int is_palindrome(char s[]){
    int i=0, j=strlen(s)-1;
    int flag=1;
    while (i<j){
        if (s[i]!=s[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    } 
    return flag;
}
int main(){
    char s[1001];
    scanf("%s",s);
    int p=is_palindrome(s);
    if (p)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}