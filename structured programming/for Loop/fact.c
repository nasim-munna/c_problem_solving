#include <stdio.h>
int main(){
    int n;
    long int fact =1;
    printf("Enter a value : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        fact = fact*i;
    printf("Factorial of %d is %ld",n,fact);
    return 0;

}
