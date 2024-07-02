#include <stdio.h>
#include <string.h>

int main() {
    char S[10001];
    scanf("%s", S); // Input the string
    
    int counts[26] = {0}; // Array to store counts for each alphabet
    int len = strlen(S);
    
    // Count occurrences of each alphabet
    for (int i = 0; i < len; i++) {
        counts[S[i] - 'a']++;
    }
    
    // Output the counts for alphabets that appeared at least once
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c - %d\n", i + 'a', counts[i]);
        }
    }
    
    return 0;
}
