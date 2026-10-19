// Print the reverse table of any number

#include<stdio.h>

int main(){
    printf("Enter the number: ");
    int num ;
    scanf("%d", &num);

    for(int i =10 ; i >=1; i--){
        printf("%d \n", num * i );

    }
    return 0;
}