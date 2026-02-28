#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    for (int t = 1; t <= T; t++) { // Loop through test cases from 1 to T
        
        int N;
        scanf("%d", &N); // Number of rounds
        char S[N+1];
        scanf("%s", S); // String representing rounds
        
        int tiger_wins = 0, pathan_wins = 0;
        
        for (int i = 0; i < N; i++) {
            if (S[i] == 'T')
                tiger_wins++;
            else
                pathan_wins++;
        }

        if (tiger_wins > pathan_wins)
            printf("Tiger\n");
        else if (tiger_wins < pathan_wins)
            printf("Pathaan\n");
        else
            printf("Draw\n");
    }

    return 0;
}

