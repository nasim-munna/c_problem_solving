#include <stdio.h>
int main(){
    char grade= 'B';
    switch(grade){
    case 'A':
        printf("Excellent \n");
        break;
    case 'B':
    case 'C':
        printf("Well \n");
        break;
    case 'D':
        printf("Passed \n");
        break;
    case 'F':
        printf("Failed \n");
        break;
    default:
        printf("Invalid Grade \n");

    }
    printf("Your grade is : %c \n",grade);
    return 0;
}
