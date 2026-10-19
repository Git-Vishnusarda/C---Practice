#include<stdio.h>

int main(){

    int age = 22;
    int *ptr = &age; 
     
    printf("%p \n", ptr ); // this prints the adress STORED in the pointer (Address of variable "age")
    printf("%p \n", &ptr); // this prints the address OF THE POINTER itself
    printf("%p \n", &age); // this prints the address of the given variable ("age")
    // ptr == &age as ptr stores the value of address of "age"
    return 0;
} 