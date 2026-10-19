// print all numbers 1-10 except 6

#include<stdio.h>

int main(){
    for( int i=1; i<=10; i++){
    
        if( i == 6){
            continue; // "Continue" just skips the given situation and moves forward with the loop
        }
        printf("%d \n", i);
    }
    return 0;

}