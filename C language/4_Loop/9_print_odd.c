// print all odd numbers bw 5-50 using break and continue

#include<stdio.h>
int main(){
    for( int i=5; ; i++){
        
        if(i > 50){
            break;
        }

        
        if(i % 2 == 0){
            continue;
        }

        printf("%d \n", i);
    }
    return 0;
}