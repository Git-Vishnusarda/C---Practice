#include<stdio.h>

int main(){
    int num;
    printf("Whats the num? ");
    scanf("%d", &num);

    if(num >= 1){
        printf("Its a natural number \n");
    }
    else{
        printf("Not a natural number \n");
    }
    printf("Thankyou");
return 0;

}