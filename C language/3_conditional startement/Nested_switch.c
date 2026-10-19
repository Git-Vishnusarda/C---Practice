#include<stdio.h>

int main(){
    char choice, device;
    printf("Whats your Device category (K/L)?\n");
    scanf("%c", &choice);

    switch(choice){
        case 'K' : printf("Kitchen selected \n");
                   printf("Enter device (O/R): ");
                   scanf(" %c", &device); // We put a space before "%c" to elemenate whitespaces as inputs
                   switch(device){
                    case 'O' : printf("Its a oven");
                              break;
                    case 'R' : printf("Its a Refrigerator");
                              break;
                    default : printf("No such device in kitchen");
                   }
                   break;

        case 'L' : printf("Living room selected \n");
                   printf("Enter device (T/A): ");
                   scanf(" %c", &device);
                   switch(device){
                    case 'T' : printf("Its a TV");
                              break;
                    case 'A' : printf("Its a AC");
                              break;
                    default : printf("No such device in Living room");
                   }
                   break;
        default : printf("Invalid choice");

    }


    return 0;
}