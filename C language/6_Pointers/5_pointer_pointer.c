#include<stdio.h>

int main(){

    int i = 5;
    int *ptr;   // we are only declaring the pointer
    int **pptr; // we are only declaring the pointer to pointer

    ptr = &i;
    pptr = &ptr;

    printf("The value of i is: %d \n", **pptr); // herethe double "**" jumped from "pptr" to "ptr" then to "i"
    return 0;


}