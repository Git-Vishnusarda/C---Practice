#include<stdio.h>

int main(){

    int age = 22;
    int *ptr = &age; // the variable"ptr" is a pointer : It stores the address of the storage block of variable "age".
   
    int _age = *ptr; // *ptr means "Value at the memory block of address which is stored in ptr"

    /*
     A new variable is made "_age".
    1. it takes the adress stored in the pointer "ptr"
    2. then goes to the storage block associated with that address ("age")
    3. Then takes the data value in that storage block "22" and assigns it to the new variable "_age"
    */
    
    printf("%p \n", ptr ); // prints the address stored in the pointer    //  ---|
    printf("%p \n", &ptr); // prints the address of the pointer itself    //     |---- these two will be the same
    printf("%p \n", &age); // prints the address of the given variable    //  ---|     as ptr stores the address of age
    return 0;
} 