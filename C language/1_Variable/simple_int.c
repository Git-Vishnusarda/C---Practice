#include<stdio.h>

int main(){

float P;
float T;
float R;

printf("Enter P: ");
scanf("%f", &P);

printf("Enter T: ");
scanf("%f", &T);

printf("Enter R: ");
scanf("%f", &R);

printf("The Simple intrest is: %f", P*T*R/100);

return 0;
}