#include<stdio.h>
int main(){

    char grade;
    int age;
    float marks;

    printf("Enter the grade ");
    scanf("%c" , &grade);

    printf("Enter the age ");
    scanf("%d" , &age);

    printf("Enter the marks ");
    scanf("%f" , &marks);

    printf("the grade is %c\n", grade);
    printf("the age is %d\n" , age);
    printf("the marks are %f" , marks);

    return 0;
}
