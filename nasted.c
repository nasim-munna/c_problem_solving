#include <stdio.h>
int main(){
    int var1,var2;
    printf("Input the variable of var1:");
    scanf("%d",&var1);
    printf("Input the variable of var2:");
    scanf("%d",&var2);
    if(var1!=var2){
        printf("Var1 is not equal to var2\n");
    }
    else if(var1>var2){
        printf("Var1 is grater than var2\n");
    }
    else if(var2>var1){
        printf("Var2 is grater than var1\n");
    }
    else{
        printf("var1 is equal to var2\n");

    }
    return 0;


}
