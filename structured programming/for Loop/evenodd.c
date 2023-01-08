#include <stdio.h>
int main(){
    int n,num,ecount=0,ocount=0;
    printf("Enter the number of list:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the value:");
        scanf("%d",&num);
        if(num%2==0){
            printf("%d is a even number\n",num);
            ecount++;
        }else{
            printf("%d is a odd number\n",num);
            ocount++;
        }

    }
    printf("Even count in the list of %d numbers is %d\n", n, ecount);
    printf("Odd count in the list of %d numbers is %d\n", n, ocount);
   return 0;

}
