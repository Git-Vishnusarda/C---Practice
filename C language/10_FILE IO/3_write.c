#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Test file.txt", "w");  // Write mode

    // Option 1 (Only fpr single char)
    fputc('V', fptr); // This will directly put the charecter in the assigned file.
    fputc('I', fptr);
    fputc('S', fptr);
    fputc('H', fptr);
    fputc('N', fptr);
    fputc('U', fptr);


    // Option 2 (For any kind of data)
    char ch = 'V'; // make a char and store your data
    fprintf(fptr, "%c", ch); // fprintf is used to enter data in the file from the char we made.

    ch = 'I';
    fprintf(fptr, "%c", ch);

     ch = 'S';
    fprintf(fptr, "%c", ch);

     ch = 'H';
    fprintf(fptr, "%c", ch);

     ch = 'N';
    fprintf(fptr, "%c", ch);

     ch = 'U';
    fprintf(fptr, "%c", ch);


    // If we type     char ch = 'I' ;    and change the mode to 'a' then "I" will be printed 
    // next withot deleting any existing data

   
    
    fclose(fptr);
    return 0;
}