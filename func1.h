
#include "posled.h"
#include <stdio.h>
#include <math.h>
#ifndef LAB_7_FUNC_H
#define LAB_7_FUNC_H
void funcQWE(int n, float array[], float array2[]) {
    float s=0.0;
    int i;
    for(i = 0; i<n; i++){
        s = s + fabsf(array[i]);

    }
    for (i = 0; i<n; i++){
        array2[i] = array[i]/s;
    }
}
int func2(n){
    int i;
    for(i=0; i<n; i++){
        x[i] = Q[i] - W[i];
        y[i] = W[i] - E[i];
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
