#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    num;
    if((num%5==0) && (num%11==0)){
        printf("This number is devided by 5 and 11");

    }else{
        printf("This number is not devided by 5 and 10");

    }
    return 0;

}
