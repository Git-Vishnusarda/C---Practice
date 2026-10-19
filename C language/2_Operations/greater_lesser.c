#include<stdio.h>

int main(){
    int x;
    printf("Whats the number? \n");
    scanf("%d", &x);
    printf("%d \n", x);
    printf("%d", (x>9) && (x<100));
    return 0;
}