
#include "posled.h"
#include <stdio.h>
#include <math.h>
#ifndef LAB_7_FUNC_H
#define LAB_7_FUNC_H
int func(){
    int i, k, n;
    float s1 = 0, s2 = 0, s3 = 0;
    k = 0;
    for(i = 1; i<=n; i++){
        s1 = s1 + fabsf(A[k]);
        s2 = s2 + fabsf(B[k]);
        s3 = s3 + fabsf(C[k]);
        k++;
    }
    for(k=0; k<5; k++){
        Q[k] = A[k]/s1;
        W[k] = B[k]/s2;
        E[k] = C[k]/s3;
    }
    int c;
    for(c=0; c<5; c++){
        x[c] = Q[c] - W[c];
        y[c] = W[c] - E[c];
    }

    return 0;
}
int viv(n) {
    int z;
    for (z = 0; z < n; z++) {
        printf("x = %4f | y = %4f \n", x[z], y[z]);
    }
    return 0;
}
#endif //LAB_7_FUNC_H
