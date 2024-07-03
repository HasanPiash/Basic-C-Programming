#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int m = 6 + (n / 2);

    // Printing upper part of the tree
    for (int i = 1, s = m - 1, k = 1; i <= m; i++, s--, k += 2) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    // Printing trunk of the tree
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
