#include<stdio.h>

void hi(); // here we declare a function using "void ()" --> it will neither take nor genreate new values
void bye();

int main(){
    hi();
    bye();
return 0;
}

void hi(){
    printf("Hi\n");
}

void bye(){
    printf("Good bye");
}