#include<stdio.h>

int main(){
    int age;                  // Making a variable "age"
    printf("Whats your age?");
    scanf("%d", &age);       // here its indicated that an "integer" will be inputted and saved in "age" variable
    char name;              // Making a variable "name"
    printf("Whats the first letter?");
    scanf(" %c", &name);             // a space is given before %c to reject spaces,/n or any white spaces
    printf("The age is %d \n",age); // %d indicates integer and its position in the sentense wheras age is the variable
    printf("The first letter is %c",name);
    return 0;
}