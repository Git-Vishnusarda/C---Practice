#include<stdio.h>

void square (int *n);
void _square (int n);

int main(){

    int num = 5;

    _square(num);
    printf("The number is: %d \n", num);


    square(&num);
    printf("The number is: %d \n", num);

    return 0;
}


void _square(int n){
    n= n * n;  // when we change the value of "n" it wont change the actual value of the variable passed as an argument as we can see in output
    printf("The _square is : %d \n", n);
}


void square (int *n){  // we created a pointer here and made it store the address of the variable entered as argument 
    *n = (*n) * (*n);  // here we changed the value of variable which is stored in "n" by using its address which resulted 
                      // in changing the actual value of the storage block therefore value of "n" got changed as seen in output.
    printf("The square is : %d \n", *n);
}



// Doubt : if we change the value of a variable in a function, does it not change in reality