#include "stdio.h"

int main(void) {
    int h, w, c1 = 0, c2 = 0;
    while(1) {
        c1 = 0;
        scanf("%d %d", &h, &w);
        if ( h == 0 && w == 0) {
            return 0;
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (c) {
                    printf(".");
                    c = 0;
                } else {
                    printf("#");
                    c = 1;
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}