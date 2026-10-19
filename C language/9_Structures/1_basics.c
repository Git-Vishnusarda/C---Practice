#include<stdio.h>
#include<string.h>

struct account{       // Defining a structure
    char name[100];
    int acc_no;
    float amt;
};

int main(){

    struct account b1;             // entering data for a particular account
    b1.acc_no = 1234;
    b1.amt= 10000000;
    strcpy(b1.name, "Vishnu");

    printf("The account holder is: %s\n", b1.name);
    printf("The account number is: %d\n", b1.acc_no);
    printf("balance: %f\n", b1.amt);
    printf("\n");


    struct account b2;            // entering data for a particular account
    b2.acc_no = 12345;
    b2.amt= 89678;
    strcpy(b2.name, "suresh");

    printf("The account holder is: %s\n", b2.name);
    printf("The account number is: %d\n", b2.acc_no);
    printf("balance: %f\n", b2.amt);
    printf("\n");



     struct account b3;            // entering data for a particular account
    b3.acc_no = 123456;
    b3.amt= 67567;
    strcpy(b3.name, "Ravi");

    printf("The account holder is: %s\n", b3.name);
    printf("The account number is: %d\n", b3.acc_no);
    printf("balance: %f\n", b3.amt);

    // Initialising structures
    struct account b4 ={"Vishal" , 1642, 27835.897};

    printf("The account holder is: %s\n", b4.name);
    printf("The account number is: %d\n", b4.acc_no);
    printf("balance: %f\n", b4.amt);

    // Pointer to structure

    struct account *ptr = &b4;
    printf("Account no for Vishal is: %s\n", (*ptr).name);
    printf("Account no for Vishal is: %s", ptr->name); // Arrow operator(->)



    return 0;
}