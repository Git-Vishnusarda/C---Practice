#include<stdio.h>

int main(){

    int marks[3]; // this is an arry with name "marks" and size "3"
    // int marks[] = {1, 2, 3} -->  This is another way of declaring an array
    printf("What are the marks for phy: ");
    scanf("%d", &marks[0]); // the first positioned storage block is refered as "0"

    printf("What are the marks for math: ");
    scanf("%d", &marks[1]); // we can treat an array as a variable while input or output

    printf("What are the marks for chem: ");
    scanf("%d", &marks[2]);

    printf("Phy: %d\nMath: %d\nChem: %d", marks[0], marks [1], marks[2]);

    return 0;

}