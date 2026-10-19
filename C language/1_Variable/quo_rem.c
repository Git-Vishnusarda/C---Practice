#include<stdio.h>

int main(){

int a;
int b;

printf("Enter the 1st number: ");
scanf("%d", &a);

printf("Enter the 2nd number: ");
scanf("%d", &b);

printf("The quotient is %d \n", a/b);
printf("The remainder is: %d", a%b);

return 0;
}