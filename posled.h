//
// Created by Roman on 01.12.2021.
//
#include <stdlib.h>
#include <stdio.h>
#ifndef LAB_7_POSLED_H
#define LAB_7_POSLED_H

float A[5];
float B[5];
float C[5];
float Q[20];
float W[20];
float E[20];
float x[20];
float y[20];
int rando() {
    int l;
    for (l = 0; l < 5; l++) {
        A[l] = rand() % 100;
        B[l] = rand() % 100;
        C[l] = rand() % 100;
        printf("A = %4f | B = %4f | C = %4f \n", A[l], B[l], C[l]);
    }
}
#endif //LAB_7_POSLED_H
