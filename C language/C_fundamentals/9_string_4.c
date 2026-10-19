#include <stdio.h>

int my_strcmp( char a[], char b[]);
void my_strstr( char main[], char find[]);

int main(){

    char a [100], b[100];

    printf("Enter a  main string: ");
    fgets(a, 99, stdin);

    printf("Enter The sub string: ");
    scanf("%98s", &b);

    // printf("%d\n", my_strcmp(a,b));

    my_strstr(a, b);




    return 0;
}


int my_strcmp( char a[], char b[]){

for(int i = 0; ;i++){


    if(a[i] != '\0' && b[i] != '\0'){

        if(a[i] > b[i]){

            return 1;
        }

        else if(a[i]< b[i]){

            return -1;
        }

        else{
        
            if(a[i+1] != '\0' && b[i+1] == '\0'){
                return 1;
            }
            else if(a[i+1] == '\0' && b[i+1] != '\0'){
                return -1;
            }

            else if((a[i+1] == '\0' && b[i+1] == '\0')){
                return 0;
            }


        }

    }

}
}


void my_strstr( char a[], char b[]){

    int a_n = 0;
    int b_n = 0;
    int check = 0;
    
    for(int i = 0; a[i] != '\0'; i++){
        a_n++;
    }

    for(int i = 0; b[i] != '\0'; i++){
        b_n++;
    }

    for(int i =0; i <= a_n - b_n; i++){

        for(int j =0; b[j] != '\0' ; j++){

            if(a[i+j] == b[j]){
                check++;
            }
            else{
                break;
            }
            
            // Doubt: If we am moving the below if block out of the for loop we dont get the 
            //        expected output


            if(check == b_n){
            for(int x = 0; x < a_n - i; x++){
                printf("%c", a[i+x]);
            }
            return; 
            }

        }
    }
}
