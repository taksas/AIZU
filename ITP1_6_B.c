#include "stdio.h"

int main(void) {
    int n1, n2, s[13], h[13], c[13], d[13], temp = 0;
    char r;
    for(int i = 0; i < 13; i++) {
        s[i] = h[i] = c[i] = d[i]= 0;
    }
    scanf("%d", &n1);
    for(int i = 0; i < n1; i++) {
        scanf("%s %d", &r, &n2);
        if (r == 'S') {
            s[n2 - 1] = 1;
        } else if(r == 'H') {
            h[n2 - 1] = 1;
        } else if(r == 'C') {
            c[n2 - 1] = 1;
        } else {
            d[n2 - 1] = 1;
        }
    }
    for(int i = 0; i < 13; i++) {
        if(s[i] == 0) {
printf("\nS %d", i + 1);
        }
    }
    for(int i = 0; i < 13; i++) {
        if(h[i] == 0) {
printf("\nH %d", i + 1);
        }
    }
    for(int i = 0; i < 13; i++) {
        if(c[i] == 0) {
printf("\nC %d", i + 1);
        }
    }
    for(int i = 0; i < 13; i++) {
        if(d[i] == 0) {
printf("\nD %d", i + 1);
        }
    }

    
    return 0;
}