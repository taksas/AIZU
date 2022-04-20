#include "stdio.h"

int gogo(int x1, int x2, int x3, int x4) {
    if (x1 == 1){
        a;
    } else if (x1 == 2) {
        a;
    } else if (x1 == 3) {
        a;
    } else {
        a;
    }
}

int main(void) {
    int n1, x1, x2, x3, x4, a11[10], a12[10], a13[10], 
                a21[10], a22[10], a23[10],
                a31[10], a32[10], a33[10],
                a41[10], a42[10], a43[10], temp = 0;
    char r;
    for(int i = 0; i < 13; i++) {
        a11[i] = a12[i] = a13[i] = 
        a21[i] = a22[i] = a23[i] =
        a31[i] = a32[i] = a33[i] =
        a41[i] = a42[i] = a43[i] = 0;
    }
    scanf("%d ", &n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
        gogo(x1, x2, x3, x4);

    }
    
    
    return 0;
}