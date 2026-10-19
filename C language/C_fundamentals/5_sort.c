#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
   
   typedef struct val{
    
    char name[50];
    int marks;
   }val;
   
   printf("Enter the value of n: ");
   scanf("%d", &n);
   
  val a [n];
   
   for(int i = 0; i<n; i++){
    
    printf("Enter the name and marks for %d index: ", i);
    scanf("%s %d", a[i].name, &a[i].marks);
   }
   
   for(int i = 0; i<n ; i++){

    for( int j = i+1; j<n; j++){
       
        if(a[i].marks < a[j].marks){
            val cont;
            cont = a[i];
            a[i] = a[j];
            a[j] = cont;
    
       }
       else if(a[i].marks == a[j].marks){

        if(strcmp(a[i].name,a[j].name) > 0){
            val cont;
            cont = a[i];
            a[i] = a[j];
            a[j] = cont;
        }
       }

       
    }
    
   }

for( int i = 0; i<n ; i++){
        printf("%s %d\n", a[i].name, a[i].marks );

    }
   
return 0;

}
