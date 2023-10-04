#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>

// Funksiyalar prototiplari
int maxSonNum(int a, int b){
    int max;
    max = (a >= b ? a : b);
    printf("%d", max);
}

#endif