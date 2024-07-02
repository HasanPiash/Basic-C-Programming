#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases
    
    while (T--) {
        int N, X;
        scanf("%d", &N); // Input the size of the array
        int A[N];
        
        // Input the array elements
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        scanf("%d", &X); // Input the value of X
        
        int found = 0;
        
        // Check if X is present in the array
        for (int i = 0; i < N; i++) {
            if (A[i] == X) {
                found = 1;
                break;
            }
        }
        
        // Output the result
        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
