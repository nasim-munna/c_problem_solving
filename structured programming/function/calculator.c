#include<stdio.h>
#include<stdlib.h>

void display(float n1, float n2, char ch, float result);
void add(float n1, float n2);
void subtract(float n1, float n2);
void multiply(float n1, float n2);
void divide(float n1, float n2);


int main()
{
  float n1, n2;
  int ch;

  do{
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("\n*****************");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
      case 1:
        add(n1,n2);
        break;
      case 2:
        subtract(n1,n2);
        break;
      case 3:
        multiply(n1,n2);
        break;
      case 4:
        divide(n1,n2);
        break;
      case 5:
        printf("Thank You.");
        exit(0);
      default:
        printf("Invalid input.");
        printf("Please enter correct input.");
    }

    printf("\n**********************************\n");
  }while(1);

  return 0;
}

void display(float n1, float n2, char ch, float result)
{
  printf("%.2f %c %.2f = %.2f\n", n1, ch, n2, result);
}

void add(float n1, float n2)
{
  float result = n1 + n2;
  display(n1, n2, '+', result);
}


void subtract(float n1, float n2)
{
  float result = n1 - n2;
  display(n1, n2, '-', result);
}

void multiply(float n1, float n2)
{
  float result = n1 * n2;
  display(n1, n2, '*', result);
}

void divide(float n1, float n2)
{
  float result = n1 / n2;
  display(n1, n2, '/', result);
}

