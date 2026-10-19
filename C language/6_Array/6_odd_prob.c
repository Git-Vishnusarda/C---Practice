// write a function to count Count the number of odd numbers in an array
#include<stdio.h>

int no_odd(int a[], int n);


int main(){

    int numbers[6]= {1,3,5,7,9,11};

    int x = no_odd(numbers, 6);
    printf("%d", x);

    return 0;
}

int no_odd(int a[], int n){

     int x=0;

    for(int i=0; i<n; i++){
       
        if(a[i]%2 != 0){
            x++;
            
        }

    }

    return(x);
}