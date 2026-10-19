// Ask 1st and last name and print using loop

#include<stdio.h>
void print_name(char a[]); //No need to mention a SIZE as it would automatically stop at '\0'

int main(){

    char first_name[] = "VISHNU"; // this is a string that stores name and the complier automatically ads a '\0' 
    char last_name[] = "SARDA";
    
    // char *first_name = "SHUBH";
    // A string can also be defined as a pointer where the pointer points at the address of
    // 1st memory block of the array

    print_name(first_name);
    printf(" ");
    print_name (last_name);
    
return 0;

}

void print_name(char arr[]){

    for(int i=0; arr[i] != '\0'; i++){ //The loop stops when we reach the null charecter ('\0')
        printf("%c", arr[i]);
    }

}