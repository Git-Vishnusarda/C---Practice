#include<stdio.h>

int main(){
    int n;
    do{
      scanf("%d" , &n);
      printf("%d \n" ,n);
    
       if(n%2 != 0){
          break; // "Break" pulls us directly out of the loop 
       }

    } while(1);
   printf("Thankyou");
    return 0;

}