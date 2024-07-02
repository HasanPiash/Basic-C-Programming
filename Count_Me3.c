#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases
    
    int i;
    for (i = T; i > 0; i--) {
        char S[10001];
        scanf("%s", S); // Input the string
        
        int uppercase = 0, lowercase = 0, digits = 0;
        int length = strlen(S); // Get the length of the string
        
        // Count the number of uppercase letters, lowercase letters, and digits
        for (int j = 0; j < length; j++) {
            if (S[j] >= 'A' && S[j] <= 'Z') {
                uppercase++;
            } else if (S[j] >= 'a' && S[j] <= 'z') {
                lowercase++;
            } else if (S[j] >= '0' && S[j] <= '9') {
                digits++;
            }
        }
        
        // Output the counts
        printf("%d %d %d\n", uppercase, lowercase, digits);
    }
    
    return 0;
}
