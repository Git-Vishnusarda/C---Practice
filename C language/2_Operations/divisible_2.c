#include <stdio.h>

int main(){
    int number;
    printf("Whats the number? \n");
    scanf("%d", &number );

    printf("%d" , 2 % number == 0 );
    return 0;
}