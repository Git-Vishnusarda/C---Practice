#include<stdio.h>

int main(){
    int age;
    printf("Whats age?");
    scanf("%d", &age);

    age>18? printf("Adult") : printf("Chottuu"); // This is Ternary Operator
    return 0;
}