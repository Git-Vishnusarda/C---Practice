#include<stdio.h>

// We use pointer in a fuction if a functions is expected to give or return more than one value

void dowork(int a, int b, int *sum, int* prod);

int main(){

    int a =5;
    int b=6;
    int sum, prod;

    dowork(a, b, &sum, &prod);

    printf("the sum is %d and \n the product is %d", sum , prod );

    return 0;
}

void dowork(int a, int b, int *sum, int *prod){

    *sum = a + b;
    *prod = a*b;
}