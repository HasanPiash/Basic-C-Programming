#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    // Check if the character is a vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}    

int main() {
    char S[100001];
    scanf("%s", S); // Input the string
    
    int consonants = 0;
    int len = strlen(S);
  
    // Count consonants in the string
    for (int i = 0; i < len; i++) {
        if (!is_vowel(S[i])) {
            consonants++;
        }
    }
    
    // Output the result
    printf("%d\n", consonants);
    
    return 0;
}
