#include<stdio.h>

int main(){

    int age = 5;
    int *ptr = &age;

    printf("The value of ptr is: %u\n", ptr);

    ptr++;  // it starts pointing to the next storage block (Adds the size of the datatype to the address) wrt the address of the block stored in the pointer.
     printf("The value of ptr is: %u\n", ptr);

    ptr--; // it starts pointing to the next storage block wrt the address of the block stored in the pointer.
     printf("The value of ptr is: %u\n", ptr);

return 0;
}