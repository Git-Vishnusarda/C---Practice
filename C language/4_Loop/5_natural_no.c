// write the sum of given natural nos and also numbers inreverse order.
 #include<stdio.h>

 int main(){
    printf("Enter a number ");
    int n;
 scanf("%d", &n);
 int sum = 0;

 for(int i=n; i>=1 ; i--){
    printf("%d \n", i);
    sum = sum + i;
    }  
 printf("%d", sum);
 return 0;
 }