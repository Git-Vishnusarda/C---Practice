// take a string and return a string from index n to m and count the vowels in it
#include<stdio.h>
#include<string.h>

void slice(char arr[], int n, int m);

int main(){


    char string[50];
    printf("Enter a string: ");
    fgets(string, 50,stdin);
    slice(string, 2,5);

return 0;
}


void slice(char arr[], int n, int m){

    char sliced[50];

    int i=0;
    int vowels = 0;

    for(int j =n; j <= m; i++, j++){
        sliced[i] = arr[j];

        if(arr [j] == 'a' || arr [j] == 'e' || arr [j] == 'i' || arr [j] == 'o' || arr [j] == 'u'){
            vowels++;
        }
    }

    sliced[i]= '\0';
    printf("%s\n",sliced);
    printf("%d", vowels);

}