#include<stdio.h>

int main(){

    float base;
    float height;

    printf("Enter the length of the base: ");
    scanf("%f", &base);
    printf("Enter the length of the height: ");
    scanf("%f", &height);

    printf("The are of the triangle is: %f", 0.5*base*height);

    return 0;

}