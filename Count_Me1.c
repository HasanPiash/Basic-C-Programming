#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the array
    int A[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int div_by_2 = 0, div_by_3 = 0;
    
    // Count elements divisible by 2 and/or 3
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            div_by_2++;
        }
        if (A[i] % 3 == 0 && A[i] % 2 != 0) {
            div_by_3++;
        }
    }
    
    // Output the counts
    printf("%d %d\n", div_by_2, div_by_3);
    
    return 0;
}
