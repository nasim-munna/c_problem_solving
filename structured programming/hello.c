#include <stdio.h>
int main(){
    int rad;
    float PI=3.1416,ci,area;
    printf("Enter a radius of Circle:");
    scanf("%d",&rad);
    area= 2*rad*rad;
    ci= 2*PI*rad;
    printf("Area : %f\n",area);
    printf("Circumference : %f",ci);
    return 0;

}
