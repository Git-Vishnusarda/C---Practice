#include<stdio.h>

int main(){

    int x;
    int *ptr; // here we declare a pointer "ptr"

    ptr = &x; // here we assigned the value of ptr = address of x
    *ptr = 0; // *ptr associates with the value stored in the storage block ("x") who address is stored in the pointer ("ptr")
    

    printf("The value of x is : %d \n",x );
    printf("The value of *ptr is : %d\n", *ptr);

    *ptr =+ 5;
    printf("The value of x is : %d \n",x );
    printf("The value of *ptr is : %d\n", *ptr);

    ++(*ptr);
    printf("The value of x is : %d \n",x );
    printf("The value of *ptr is : %d\n", *ptr);

    return 0;
}