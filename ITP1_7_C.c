#include "stdio.h"


int main(void) {
    int r, c, n, hyo[10000];
    int x = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            scanf("%d", &n);
            hyo[x++] = n;
        }
        hyo[x++] = 100;
        
    }
    return 0;
}