#include<stdio.h>

int main(){

    int math = 99;
    int science = 98;

    int *ptr = &math;
    int *_ptr = &science;
    
    printf("ptr: %u\n_ptr: %u\nThe diffrence is: %u\n", ptr, _ptr, ptr - _ptr);

    _ptr = &math;

    printf("Comparision: %u", ptr == _ptr);
    return 0;
}
/*

1. The address in the pointers is subracted and expressed in number of datatype size
Eg- if output for the subraction of two integer type pointers is 1 means they differ with 1 integer datatype {4 Bytes}
NOTE: ONLY SAME INTEGER TYPE POINTERS CAN BE SUBRACTED

2. we can also compare pointers

*/