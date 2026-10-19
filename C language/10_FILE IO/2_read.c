#include<stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("new.txt","r");

    char ch;
    // It goes chareter by charected and reads them and prints them simuntaniously
    fscanf(fptr, "%c", &ch);
    printf("The charecter stored is: %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("The charecter stored is: %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("The charecter stored is: %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("The charecter stored is: %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("The charecter stored is: %c\n", ch);
    
    // we can also USE "fputc" ONLY to get charecters

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    fclose(fptr);
    return 0;
}