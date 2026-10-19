/*
write a program that takes an array arr[] of size N from the user and rotates the array to the 
left (counter-clockwise direction) by D steps, where D is a positive integer. 


Logic : Just move the element in "i" to "i+D"
        and we will end up having a array of length (n-D) with the last element on index n-1-D
*/



void array_rotate(int arr[],int n, int D );
void array_enter(int arr[], int n);


 #include <stdio.h>

 int main(){

    int n;
    int D;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Enter the value of D: ");
    scanf("%d",&D);

    int arr[n];

    array_enter(arr, n);

    array_rotate(arr, n, D);

    for(int i =0; i< n-1-D; i++){
        printf("%d\t", arr[i]);
    }

 }

void array_enter(int arr[], int n){

    for (int i = 0; i < n; i++){

        printf("Enter a value: ");
        scanf("%d", &arr[i]);
    }
}

void array_rotate(int arr[],int n, int D ){

    for(int i = 0; i < n-1-D; i++){
        
        arr[i] = arr[i+D];
    }
}