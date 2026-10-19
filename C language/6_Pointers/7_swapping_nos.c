// swap 2 numbers a and b
#include<stdio.h>

void swap(int *a , int *b);

int main(){

    int a = 5;
    int b = 9;

    swap(&a , &b);

    printf("The value of a is: %d\n" , a);
    printf("The value of b is: %d", b);

    return 0;
}


void swap(int *a , int *b){
     int _a = *a;
     *a = *b;
     *b = _a;
}