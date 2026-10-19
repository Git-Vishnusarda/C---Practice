#include<stdio.h>

int main(){
    char choice;
    printf("Whats your choice?");
    scanf("%c", &choice);

    switch(choice){
        case 'B' : printf("Displaying your balance");
                       break;
        case 'D' : printf("Depositing money");
                       break;
        case 'W' : printf("Withdrawing money");
                        break;
        default : printf("Invalid choice");

    }


    return 0;
}