#include<stdio.h>

// void add_gst(int *n);

int main(){

    float price[3];

    printf("What is price of product 1: ");
    scanf("%f", &price[0]); 
    
    printf("What is price of product 2: ");
    scanf("%f", &price[1]); 

     printf("What is price of product 3: ");
    scanf("%f", &price[2]);

    printf("Phy: %f\nMath: %f\nChem: %f", price[0] * 118/100, price[1] * 118/100, price[2] * 118/100);

    return 0;
}

// void add_gst(int *n){
//     *n = 
// }