#include <stdio.h>
int main(){
    float fahrenheit,celsius;
    printf("Enter your fahrenheit Temperature: ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit - 32)*5/9;

    printf("Total celsius :%.3f", celsius);
    return 0;
}

