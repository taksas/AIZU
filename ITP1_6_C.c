#include "stdio.h"


int main(void) {
    int n1, x1, x2, x3, x4, a11[10], a12[10], a13[10],
                a21[10], a22[10], a23[10],
                a31[10], a32[10], a33[10],
                a41[10], a42[10], a43[10], temp = 3;
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
            x3 -= 1;
    if (x1 == 1){
        if (x2 == 1){
            a11[x3] += x4;
        } else if (x2 == 2) {
            a12[x3] += x4;
        } else {
            a13[x3] += x4;
        }
    } else if (x1 == 2) {
        if (x2 == 1){
            a21[x3] += x4;
        } else if (x2 == 2) {
            a22[x3] += x4;
        } else {
            a23[x3] += x4;
        }
    } else if (x1 == 3) {
        if (x2 == 1){
            a31[x3] += x4;
        } else if (x2 == 2) {
            a32[x3] += x4;
        } else {
            a33[x3] += x4;
        }
    } else {
        if (x2 == 1){
            a41[x3] += x4;
        } else if (x2 == 2) {
            a42[x3] += x4;
        } else {
            a43[x3] += x4;
        }
    }
    }
    
    for(int x1 = 1; x1 <= 4; x1++) {
    for(int x2 = 1; x2 <= 3; x2++) {
    for(int x3 = 0; x3 < 10; x3++) {


    if (x1 == 1){
        if (x2 == 1){
            printf(" %d", a11[x3]);
        } else if (x2 == 2) {
            printf(" %d", a12[x3]);
        } else {
            printf(" %d", a13[x3]);
        }
    } else if (x1 == 2) {
        if (x2 == 1){
            printf(" %d", a21[x3]);
        } else if (x2 == 2) {
            printf(" %d", a22[x3]);
        } else {
            printf(" %d", a23[x3]);
        }
    } else if (x1 == 3) {
        if (x2 == 1){
            printf(" %d", a31[x3]);
        } else if (x2 == 2) {
            printf(" %d", a32[x3]);
        } else {
            printf(" %d", a33[x3]);
        }
    } else {
        if (x2 == 1){
            printf(" %d", a41[x3]);
        } else if (x2 == 2) {
            printf(" %d", a42[x3]);
        } else {
            printf(" %d", a43[x3]);
        }
    }


    }
    printf("\n");
    }
    if (temp--) {
    printf("####################\n");
    }
    }

    
    return 0;
}