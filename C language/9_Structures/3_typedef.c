#include<stdio.h>

typedef struct address_of_a_resident{   //typedef helps to assign nicknames to the datatypes we make to reduce length
    char name[100];
    int door_no;
    char area[100];
} add;                                  // here we set the nickname as address

int main(){

    add res_1 = {"Vishnu", 1234, "Kachiduga"};
    add res_2 = {"Shubhangi", 12345, "Bagh lingampally"};
    
    printf("Name: %s\n", res_1.name);
    printf("Door no: %d\n", res_1.door_no);
    printf("area: %s\n", res_1.area);
    printf("\n");

     
    printf("Name: %s\n", res_2.name);
    printf("Door no: %d\n", res_2.door_no);
    printf("area: %s\n", res_2.area);

    return 0;
}
