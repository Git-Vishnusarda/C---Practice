#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct student ECE[100];
    struct student IT[100];
    struct student CSE[100];

    IT[0].roll = 1;
    IT[0].cgpa = 9.8;
    strcpy(IT[0].name, "Vishnu");

    printf("Name : %s\n", IT[0].name);
    printf("Roll no: %d\n", IT[0].roll);
    printf("CGPA: %f\n", IT[0].cgpa);

    return 0;

}