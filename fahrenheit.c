#include <stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter your celsius Temperature: ");
    scanf("%f",&celsius);
    fahrenheit= (celsius * 9 / 5) + 32;
    printf("Total Fahrenheit : %0.2f ", fahrenheit);
    return 0;
}
