#include <stdio.h>
int main(){
    int i,n,a[100],large;
    printf("Enter total number of element(1 to 100):");
    scanf("%d",&n);

    for(i=0;i<n;++i){
        printf("Enter Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    large= a [0];
    for(i=1;i<n;++i){
        if(a[i]>large){
            large=a[i];
        }
    }
    printf("Largest ELement = %d",large);
    return 0;


}
