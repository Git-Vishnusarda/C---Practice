#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char sen[1001];
   
   fgets(sen, 1001, stdin);
   
   for(int i =0, j=0; sen[i] != '\0'; i++){
    

    if((sen[i]== ' ' && sen[i+1] != ' ') || sen[i]== '\n'){


        for(int x = j; x< i; x++){
            printf("%c", sen[x]);
        }
        printf("\n");
        j = i+1;
        }
    }
       
    return 0;
}
