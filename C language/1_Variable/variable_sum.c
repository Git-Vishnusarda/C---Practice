#include<stdio.h>

int main(){
    int a, b; // We made 2 variable "a" and "b"
    printf("Whats thevalue of a?"); // asked for the values
    scanf("%d", &a); //took values and stored them

    printf("Whats thevalue of b? ");
    scanf("%d", &b);

    printf("The sum is %d", a + b);
    return 0;
}