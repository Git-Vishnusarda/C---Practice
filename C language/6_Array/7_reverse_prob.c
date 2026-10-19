//Reverse the order of the data entered in a array
#include<stdio.h>

void reverse(int ar[],int n);

int main(){

    int numbers[5]={1,2,3,4,5};

    reverse(numbers,5);

    for(int i=0; i<5; i++){
        printf("%d\t", numbers[i]);
    }
    return 0;
}
// classic answer

void reverse(int ar[], int n){

    for( int i= 0; i<n/2; i++){
        
        int first_no = ar[i];
        int last_no= ar[n-1-i];

        ar[i] = last_no;
        ar[n-1-i] = first_no; 
    }
}
// self answer

// void reverse(int ar[],int n){


    //     if(n %2 == 0){
            
    //         int _ar[n/2];

    //         for(int x= 0; x<(n/2) ; x++){
    //             _ar[x]= ar[x];
    //         }

    //         for(int i=0; i<n; i++){
    //             ar[i] = ar[n-1-i];
    //         }

    //         for(int y = 0; y< n/2 ; y++){
    //             ar[(n/2)+y] = _ar[(n/2)-1-y];
    //         }
    //     }
    // }