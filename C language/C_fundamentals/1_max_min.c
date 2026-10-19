// write a program to find the maximum and the minimum element 
// of the array of size N given by the user.

#include<stdio.h>

void array_entry (int a[],int n);
void max_min (int a[], int n);

int main(){

int n;
int arr[n];

printf("The length of array is: ");
scanf("%d", &n);

array_entry(arr,n);
max_min(arr,n);

return 0;
}

void array_entry (int a[],int n){

    for(int i =0; i <n; i++){
        printf("Enter a value: ");
        scanf("%d", &a[i]);
    }
}

void max_min (int a[], int n){

    int max = a[0];
    int min = a[0];


    for(int i = 0; i < n; i++){

        if (a[i] > max){
            max = a[i];
        }

        if (a[i] < min){
            min = a[i];
        }
        }

    printf("The max value is %d and the minimum value is %d", max ,min);
    return;
    }

