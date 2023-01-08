#include <stdio.h>
int main(){
    char l;
    printf("Enter a letter:");
    scanf("%c",&l);
    switch(l){
    case 'a':
        printf("a is vowel");
        break;
    case 'e':
        printf("e is vowel");
        break;
    case 'i':
        printf("i is vowel");
        break;
    case 'o':
        printf("o is vowel");
        break;
    case 'u':
        printf("u is vowel");
        break;
    default:
        printf("This letter is Conconent");
    }
    return 0;

}
