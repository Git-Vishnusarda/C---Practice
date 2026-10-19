#include<stdio.h>

// Make the string functions yourself

int strleng(char a[]);
void stcpy(char a[], char b[]);
void stcat(char a[], char b[]);

int main(){

char name[100];
char name_2[100];


printf("Enter a string: ");
scanf("%s", name);
printf("The length of the string is %d\n",strleng(name));



stcpy(name_2,name);

char sur[100] = "Sarda";
stcat(name,sur);
 

return 0;

}

int strleng(char a[]){
    int count = 0;
    for(int i = 0; a[i] != '\0'; i++){
        count++;
    }

    return count;
}

void stcpy(char new[], char old[]){
      
    for(int i = 0; old[i] != '\0'; i++){
        new[i]= old[i];
    }
    printf("The copied string is: ");
    puts(new);

}

void stcat(char first[], char second[]){

    int n = strleng(first);
    int i;
    first[n] =' ';

    for(i = 0; second[i] != '\0'; i++){

        first[n+i+1] = second[i];

    } 

    first[n+i+1] = '\0';


    puts(first);
}



