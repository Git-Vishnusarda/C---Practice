#include<stdio.h>

int main(){

    int age = 18;
    int *pointer = &age;

    printf("%d \n", *pointer); // prints the data value ("18") stored in the variable ("age" )associated with the pointer 
    printf("%d", *(&age));  // takes the address of the variable mentioned then gives the value present in that address 
    return 0;
}