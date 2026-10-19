#include<stdio.h>
 void table(int a); // here we declare a function with "void (smtg)" --> it will take values but will not generate any

 int main(){
    printf("Whats the number ");
    int n;                      // we decalre n to store value of the number
    scanf("%d", &n);

    table(n);                   // This is the argument /the actual parameter
    return 0;

 }

 void table(int a){  // a is a parameter/ formal parameter 
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i * a);
    }
 }
