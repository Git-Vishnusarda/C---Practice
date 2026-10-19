#include<stdio.h>

int factorial (int x);
int main(){
printf("Give the value: ");
int x;
scanf("%d", &x);

printf("The factorial is: %d", factorial(x));

    return 0;
}

int factorial (int x){
    if (x == 1){
        return 1;
    }
    int fct = factorial(x - 1) * x;
    return fct;
}