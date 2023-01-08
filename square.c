#include <stdio.h>
int main(){
    float length,area;
    printf("Enter your square one side length: ");
    scanf("%f",&length);
    area= length*length;
    printf("Total Square Area : %0.2f ", area);
    return 0;
}
