#include<stdio.h>

void array_entry(int arr[], int n);
void array_reverse(int arr [], int n);
void array_rotate (int arr[], int n, int d);
int second_largest (int arr[], int n);

int main (){

    int n;
    int d;

    printf("The value of n is: ");
    scanf("%d", &n);

    printf("The value of d is: ");
    scanf("%d", &d);

    int array [n];

    array_entry(array, n);


    array_reverse(array,n);
    printf("\n");
    array_rotate(array, n,d);

    printf("\n");
    printf("The second largest value is : %d\n", second_largest(array,n));


    array_rotate(array, n,d);

 return 0;
}

void array_entry(int arr[], int n){

    for (int i = 0; i < n; i++){

        printf("Enter the value in %d index: ", i);
        scanf("%d", &arr[i]);
    }
}

void array_reverse(int arr [], int n){

    for(int i = 0; i < (n/2); i++){
        int temp;
        temp = arr[i];
        arr[i]= arr[ n-1-i];
        arr[n-1-i] = temp;
    }

    for( int i = 0; i <n; i++){
        printf("%d\t", arr[i]);
    }
}

void array_rotate (int arr[], int n, int d){
    
    if (n>d){
        for ( int i = 0; i < n-d ; i++){
        arr[i] = arr[i+d];
        }

        for( int i = d; i < n-d; i++){
        printf("%d\t", arr[i]);
    }

}
    else{
        d = d-n;
        for ( int i = 0; i < n-d ; i++){
        arr[i] = arr[i+d];
        }

        for( int i = d-1; i < n-d; i++){
        printf("%d\t", arr[i]);
    }
    
}
}

int second_largest (int arr[], int n){
    
    /*
    Logic: We assume the 1st index as max then compare it with the other indexes
           case 1 : index > max_1 (Initially: arr[0]) : the max value becomes 2nd max and the new max value is considered
           case 2 : index < max_1
                    case 2.1: index < max_1 and max_2 :          Nothing to be done
                    case 2.2: index < max_1 and index > max_2 :  put the value of max_2 as the value of the index
    
    */
    int max_1 = arr[0];
    int max_2 = arr[0];  

    if (n < 2){
        return 0;
    }

    for (int i = 0; i< n; i++){
        if (arr[i]> max_1){
            max_2 = max_1;
            max_1 = arr[i];
        }

        else if (arr[i]< max_1 && arr[i]> max_2){
            max_2 = arr[i];
        }

        else if (arr[i] == max_1){
            continue;
        }
    }
        
return(max_2);
}