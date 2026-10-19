// Take the info of students and save it in a file.

#include<stdio.h>


typedef struct Student_info{
    char name[100];
    int roll;
    float cgpa;
}std;

int main(){

    std stu[2];


    printf("Whats the name of the first student: ");
    fgets(stu[0].name, 51, stdin); // We use fgets over here as stcanf cant take words seprated with spaces

    printf("Whats the Roll no of the first student: ");
    scanf("%d", &stu[0].roll); //DOUBT : WHY DO I HAVE TO USE "&" wheras normally we can just write the arrays name
    
    printf("Whats the cgpa of the first student: ");
    scanf("%f", &stu[0].cgpa);
    
    getchar();//This consumes the '\n' (Enter button) which is not consumed in "cgpa".

    printf("Whats the name of the second student: ");
    fgets( stu[1].name, 51, stdin);
    printf("Whats the Roll no of the second student: ");
    scanf("%d", &stu[1].roll);
    printf("Whats the cgpa of the second student: ");
    scanf("%f", &stu[1].cgpa);

    FILE *std;

    std = fopen("Student info.txt", "w");


 for (int i=0 ; i<2; i++){
    fprintf(std, "Name: %s\t", stu[i].name);
    fprintf(std, "roll: %d\t", stu[i].roll);
    fprintf(std, "cgpa: %f\n", stu[i].cgpa);
 }


fclose(std);
return 0;

}