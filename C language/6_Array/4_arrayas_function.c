// array as function argument (NOTE: ARRAY IS ALSO TREATED AS A POINTER)
#include<stdio.h>

void printmarks(int a[], int n); 
// methode-1 here in "a[]" the "[]" indicates array will be entered. we take "n" as the size.
  
void printmarks(int *a, int n);  
// methode-2 we can use a pointer which will take the address of the 0th index.



int main(){

    int argument[] = {1,2,3,4,5};
    printmarks(argument, 5);   // argument = &argument[0] (VIMP)
    return 0;

}

// void printmarks(int a[], int n){
void printmarks(int *a, int n){

    for( int i = 0; i<n ; i++){
        printf("%d \t", a[i]);
    }
}
