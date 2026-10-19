#include<stdio.h>
int a, b;
int sum( int x , int y); // we declared a function here with "int (parameter1, parameter2 )" --> takes and gives integer values

int main(){
    
    printf("Whats a? ");
    scanf("%d", &a);
    printf("Whats b?");
    scanf("%d", &b);

    int s = sum(a , b); // we are using sum function just like printf() or scanf()

    printf("The sum is %d ", s);
    
    
    return 0;
}

int sum( int x , int y){ // we defined sum as it needs twointegers value denoted by x and y
    return (x+y) ;         // this says that x + y is the value given out
}