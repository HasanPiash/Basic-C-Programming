#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K); // Input N and K
    
    for (int i = 0; i < N; i++) { // Outer loop for N times
        for (int j = 1; j <= K; j++) { // Inner loop to print from 1 to K
            printf("%d ", j);
        }
        printf("\n"); // New line after printing from 1 to K
    }
    
    return 0;
}
