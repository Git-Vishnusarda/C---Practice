#include<stdio.h>

int main(){

    char name[100];

    gets(name); //it can save sentences/ 2 or more words even if seprated by spaces and dosent have a limit to the data stored
    puts(name); //Output
    fgets(name,5,stdin); // It has a limit of (n-1) charecters to be stored {eg- here n=5 so 4 charecters can be stored}
    puts(name);

    return 0;
}