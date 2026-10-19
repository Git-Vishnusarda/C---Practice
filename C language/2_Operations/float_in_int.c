#include<stdio.h>
int main(){
    float number;
    printf("whats the number? \n");
    scanf("%f", &number );
    int a = (int) number;
    printf("%d", a);
    return 0;
}