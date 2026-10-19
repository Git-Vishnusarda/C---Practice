#include<stdio.h>

int main(){
    float side;
    printf("Whats the length of the side of the square? \n");
    scanf("%f", &side );
    
    printf("The area of the square is %f", side * side);
    return 0;
}