// create a structure to store vectors. then make a function to return sum of 2 vectors.

#include<stdio.h>

struct vector{
    int x;
    int y;
};

int sum_x (struct vector v[]);
int sum_y (struct vector v[]);

int main(){

    struct vector v[2];

    printf("Give the value of the 1st ordinate: ");
    scanf("%d", &v[0].x);

    printf("Give the value of the 1st Absica: ");
    scanf("%d", &v[0].y);

    printf("Give the value of the 2nd ordinate: ");
    scanf("%d", &v[1].x);

    printf("Give the value of the 2nd Absica: ");
    scanf("%d", &v[1].y);

    printf("Then sum of the vector is %di + %dj ", sum_x(v), sum_y(v));

    return 0;
}
int sum_x (struct vector v[]){
    int sum = v[0].x + v[1].x;

    return(sum);
}

int sum_y (struct vector v[]){
    int sum = v[0].y + v[1].y;

    return(sum);

}