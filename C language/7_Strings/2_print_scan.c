#include<stdio.h>


int main(){

char first_name[50];// we need to enter some random huge size here 
char last_name[50];

    printf("Whats your name? ");
    scanf("%s", first_name); // (%s) denotes a string is entered. It can only store a word but cant save 2 or more words seprated with spaces 
    printf("Your first name is %s\n", first_name); 

    //  printf("Whats yourlast name? ");
    // scanf(" %s", last_name);
    // printf("Your last name is %s", last_name);

    return 0;
}