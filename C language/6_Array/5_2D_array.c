// store the marks of 2 students for 3 subjects in terms of array

#include<stdio.h>

int main(){

    int marks[2][3];
     //1st "[]" --> no of rows/ no of arrays 
     //2nd "[]" --> no of coloumns/size of an array

      // alloting marks according to the location based on the "MATRIX"
     marks [0][0]= 90;              //  MATRIX
     marks [0][1]= 95;              //  -|-|-   ---> 1ST ARRAY        
     marks [0][2]= 99;             //   -|-|-   ---> 2ND ARRAY

     marks [1][0]= 92;
     marks [1][1]= 89;
     marks [1][2]= 98;

 for ( int i = 0; i<3; i++){
    printf("The marks for A are %d\n", marks [0][i]);
 }

 for ( int i = 0; i<3; i++){
    printf("The marks for B are %d\n", marks [1][i]);
 }

return 0;
}