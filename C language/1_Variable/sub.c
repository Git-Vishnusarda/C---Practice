#include<stdio.h>
int main(){
    int a;
    int b;
    int c;

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    printf("Enter the 3rd number: ");
    scanf("%d", &c);

    int sub_1 = a-b;
    int sub_2 = sub_1 - c;

    printf("%d", sub_2);

    return 0;
    
}