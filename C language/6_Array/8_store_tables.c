// Write a array that stores the table of 2 and 3.

#include<stdio.h>

void store_table(int a[][10], int row, int number);

int main(){

     int tables[2][10]; // array of 2 rows and 10 coloumns

     store_table(tables, 0, 2);
     store_table(tables,1,3);

     for (int i=0; i<10; i++){
        printf("%d\t", tables[0][i]);
     }
     printf("\n");
      for (int i=0; i<10; i++){
        printf("%d\t", tables[1][i]);
     }


    return 0;
}


void store_table(int a[][10], int row, int  number){

    for(int i=0; i<10; i++){  // moving to the next block and storing the respective multiple
      a[row][i] = number * (i+1);
    }

}