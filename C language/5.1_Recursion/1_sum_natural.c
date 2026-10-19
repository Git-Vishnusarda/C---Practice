#include<stdio.h>

int sum (int n);

int main(){

    printf("Value?");
    int n;
    scanf("%d", &n);
    printf("The sum is: %d", sum(n));

    return 0;
}

// recurssion
int sum (int n){
    if (n == 1){     // here we set the base value of the recurssion 
        return 1;
    }
    
    int sum_n= sum(n-1) + n;  // we defined the logic where the function calls itsef till the base value
    return (sum_n);
}