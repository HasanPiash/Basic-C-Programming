#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int a[N][M];

    // Input matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1; 
    if (N != M) {
        flag = 0;
    }

    // Check primary and secondary diagonals, as well as other elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((i == j || i + j == N - 1) && a[i][j] != 1) {
                flag = 0;
                break;
            }
            else if ((i != j && i + j != N - 1) && a[i][j] != 0) {
                flag = 0;
                break;
            }
        }
        if (!flag) break; // If flag is already 0, no need to continue checking
    }

    if (flag) printf("YES\n");
    else printf("NO\n");

    return 0;
}
