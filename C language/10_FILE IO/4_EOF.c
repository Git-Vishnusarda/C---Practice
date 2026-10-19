#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Random.txt", "r");

    char ch;
    ch = fgetc(fptr);
     
    while(ch != EOF){  // When the whole data of the file is complete and there is ntg left, fgets gives 'EOF'
        printf("%c", ch);
        ch = fgetc(fptr);
    }


    fclose(fptr);
    return 0;
}