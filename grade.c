#include <stdio.h>
int main(){
    int num;
    printf("Enter a number between 1-100:");
    scanf("%d",&num);
    if(num>90){
        printf("Your grade is Golden A+");
    }
    else if(num>=80){
        printf("Your grade is A+");

    }
    else if(num>=70){
        printf("Your grade is A");
    }
    else{
        printf("You are failed");
    }
}


