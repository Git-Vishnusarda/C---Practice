#include<stdio.h>

float square_area ( float s);
float rectangle_area ( float x, float y);
float circle_area ( float r);

int main(){
printf("Side of square: ");
int s;
scanf("%d", &s);

float sa = square_area(s);
printf("Area of square is %f\n", sa);

return 0;
}


float square_area (float s){
   return (s*s);
}

float rectangle_area (float x, float y){
   return (x*y);
}

float circle_area ( float r){
   return (3.14 * r* r);
}