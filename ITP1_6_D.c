#include "stdio.h"


int main(void) {
    int n, m, x1[100000], x2[100], temp, c;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n * m; i++) {
        scanf("%d", &x1[i]);
    }
    for(int i = 0;i < m; i++) {
        scanf("%d", &x2[i]);
    }
    temp = c = 0;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c += x1[temp++] * x2[j];
        }
        printf("%d\n", c);
        c = 0;
    }
    
    return 0;
}