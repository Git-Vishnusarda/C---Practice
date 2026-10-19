// Find the length of the entered name and the number of times a particular letter is entered
#include<stdio.h>
void length (char arr[]);
int main(){

    char name[50];
    printf("Whats your name? ");
    fgets(name,50,stdin);

    printf("Your name is:");
    puts(name);
    length(name);
}

void length (char arr[]){
    int length = 0;
    int h =0;

    for(int i=0; arr[i] != '\0'; i++){  //Loop reaches '\0' and stops
        length ++;                      // After every letter int increases the value with 1
        if(arr[i] == 'H'){
            h++;                         // If a letter is 'H' then the count oh h inc with 1
        }
    }

    printf("The length of your name is: %d\n", length - 1);
    printf("The letter h is: %d", h);
    
}