#include<stdio.h>

int main(){

    FILE *fptr; // FILE is the type of structure

    fptr = fopen("text.txt","r"); // READ MODE

    if(fptr == NULL){
        printf("No such file exist"); // if no such file is found "NULL" is stored in the pointer.
    }
    else{
     fclose(fptr); // make sure to enter the name of the pointer which is associated with the file    
    }

    fptr = fopen("Test file.txt", "w"); // if no such file is found it will create it [WRITE MODE]
    fclose(fptr);
    return 0;

}
