#include<stdio.h>

int main(){
    float radius;
    printf("whats the radius? ");
    scanf("%f" , &radius);

    printf("the area of the circle is %f", 3.14 * radius * radius);
    return 0;
}