#include<stdio.h>

void namaste();
void bonjour();

int main(){
    printf("Whats you nationality (I/F): ");
    char nat;
    scanf("%c", &nat);

    // switch (nat){
    //     case 'I' : namaste();
    //             break;
    //     case 'F' : bonjour();
    //             break;
    //     default : printf("Wrong input");
    // }

    if(nat == 'I'){
        namaste();
    }
    else if (nat == 'F'){
        bonjour();
    }
    else {
        printf("Wrong input");
    }

return 0;
}

void namaste(){
    printf("Namaste bhaii");
}

void bonjour(){
    printf("Bonjour");
}