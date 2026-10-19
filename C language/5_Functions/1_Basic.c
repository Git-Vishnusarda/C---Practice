#include<stdio.h>
void printhello (); // Step-1 Here we declared the function

int main(){

    printhello(); // Step -3 We called the function here
    printhello(); //we can us the function as many times we want
    printhello();

    return 0;
}

void printhello(){
    printf("Hello\n"); // Step -2  We defined the function
}