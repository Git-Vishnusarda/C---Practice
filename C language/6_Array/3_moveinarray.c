#include<stdio.h>

int main(){
    
    int rool_no[4];
    int *ptr = &rool_no[0];

    for( int i=0; i < 4; i++){

    printf("value at index no %d: ", i);
    // scanf("%d", ptr+i);  // Pointer methode- as the number gets added the storage block moves next as the datatype is getting added
    scanf("%d", rool_no[i]);// Array methode - as value of i increases the storage blocks moves ahead

    }

    for( int i = 0; i < 4; i++){
        // printf("%d\n", *ptr+i);
        printf("%d\n", rool_no[i]);
    }

    return 0;

}