#include<stdio.h>

int main (){
    int marks;
    printf("whats yours score: ");
    scanf("%d", &marks);

    if(marks>90){
        printf("A+");
    }
    else if(marks>80){
        printf("A");
    }
    else if(marks>70){
        printf("B+");
    }
    else if(marks>60){
        printf("B");
    }
    else{
        printf("Padhle bhai");
    }

    return 0;
}