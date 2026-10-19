#include<stdio.h>
#include<string.h> //New library for strings

int main(){

    char name[50]= "Vishnu";



// 1. Counts the length of the string except '/0' [strlen]
    int length = strlen(name);
    printf("%d\n", length);
    
// 2. Copies value of 2nd string to 1st string [strcpy]

    char name_ [50] = "Changed";
    strcpy(name,name_); // vishnu --> changed
    puts(name);

// 3. Concatenates first and second string and saves it in the first string. [strcat] //There is no auto spacing

    char hello [100] = "Hello";
    char world [] = "World";
    strcat(hello,world); // the concatination is stored in 1st string(hello)
    puts(hello);

// 4. Compares 2 strings and returns the value of the subraction between there ASCII numbers [strcmp]

    char str_1 [] = "A";                       // 1 --> str1 > str2
    char str_2 [] = "a";                       //-1 --> str1 < str2
    printf("%d\n",strcmp(str_1,str_2));        // 0 --> str1 = str2

    return 0;
}
