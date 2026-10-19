#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
// 1. MALLOC
   // ptr = (int*) malloc(5* sizeof(int));              // takes no of bytes and returns memory with void type


// 2. CALLOC
   ptr = (int*) calloc(5, sizeof(int));                // by default "0" is saved in all the memory locations. 


    for(int i=0; i<5; i++){
        ptr[i] = i + 1;                               // Here we are assingning values in the allocated memory
    }

    for(int i=0; i<5; i++){
       printf("The value of index %d is %d\n", i, ptr[i]);
    }
  printf("\n");

    // 3. REALLOC
    ptr = realloc(ptr, 10);                          // helps to increase/decrease the no of allocated memory assigned by malloc/calloc

    
    for(int i=0; i<10; i++){
        ptr[i] = i + 1;                              // Here we are assingning values in the allocated memory
    }

    for(int i=0; i<10; i++){
       printf("The value of index %d is %d\n", i, ptr[i]);
    }

//4. FREE
    free(ptr);                                       // Frees up memory that is allocated using malloc/calloc

    return 0;
}

