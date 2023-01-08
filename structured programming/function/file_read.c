#include<stdio.h>
#include<stdlib.h>
//1. content of file printing
/*
int main()
{
    char ch,file_name[30];
    FILE *fp;
    printf("Enter the name of the file: ");
    gets(file_name);
    fp=fopen(file_name,"r");
    if(fp==NULL) {

        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Content of %s file are: \n",file_name);

    while((ch=fgetc(fp))!= EOF)
        printf("%c",ch);

  return 0;
}
*/

int main()
{
    char ch,file_name[100];
    FILE *fp;
    int l=0,w=0,c=0;
    printf("Enter the name of the file: ");
    gets(file_name);
    fp=fopen(file_name,"r");

    if(fp) {

    while((ch=fgetc(fp))!=EOF)
    {
        if(ch!=' ' && ch!='\n') c++;
        if(ch==' ' || ch=='\n') w++;
        if(ch=='\n') l++;
    }
    if(c>0) {w++; l++;}

    }
    else
        {
            perror("Error while opening the file.\n");
            exit(EXIT_FAILURE);
        }
    printf("Lines: %d\n",l);
    printf("Words: %d\n",w);
    printf("Characters: %d\n",c);

  return 0;
}
