// find the factorial of a number

#include<stdio.h>
int main(){
    printf("Enter a number: ");
    int num, factorial = 1;
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        factorial = i * factorial;

    }
    printf("%d", factorial);
    return 0;
}


