// Reverse a array entered by the user of size n

/*

Logic: we pick the element in the 1st [i] index and save it in a temp variable
       Then we take the element in the n-1th [n-1-i] index and store it in the 1st index.
       then we take the value(of 1st index) from the container and put it in the nth index.
       here we replaced the nth and 1st index.
       we do this for half of the length of the array to every position respectively
       so that all the elements are placed in there positions correctly.

*/ 

#include<stdio.h>

void array_entry (int a[],int n);
void array_reverse(int a[], int n);
void print_array(int arr[], int n);

int main(){

    int n;
       printf("Enter the value of n: ");
       scanf("%d", &n);


    int arr[n];
    array_entry(arr,n);
    array_reverse(arr,n);
    print_array(arr,n);



return 0;
}

void array_entry (int a[],int n){

    for(int i =0; i <n; i++){
        printf("Enter a value: ");
        scanf("%d", &a[i]);
    }
}

void array_reverse(int a[],int n){

    for(int i = 0; i < n/2; i++){

        int container= a[i];
        a[i]= a[n-1-i];
        a[n-1-i] = container;
    }
   
    }

void print_array(int arr[], int n){

     for(int i =0; i <n; i++){
        printf("%d \t", arr[i]);
    }
    
}