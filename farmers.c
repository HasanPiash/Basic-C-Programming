#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    for (int i = 0; i < T; i++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        
        int days_saved = D - (D * M1) / (M1 + M2);
        
        printf("%d\n", days_saved); 
    }
    
    return 0;
}
