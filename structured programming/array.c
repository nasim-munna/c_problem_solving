#include <stdio.h>

int main(){
    int my_array[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0;i<10;i++){
        printf('%dth element is %d \n',i+1,my_array[i]);
    }

    return 0;
}
