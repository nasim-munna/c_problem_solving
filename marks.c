#include <stdio.h>
int main(){
    float math,phy,che,eng,bio,total,average;
    printf("Enter Mark of Five Subject:\n ");
    scanf("%f%f%f%f%f",&math,&phy,&che,&eng,&bio );
    total = math+phy+che+eng+bio;
    printf("Total Number : %0.2f\n", total);
    average= total/5;
    printf("Average Number : %0.2f", average);
    return 0;
}


