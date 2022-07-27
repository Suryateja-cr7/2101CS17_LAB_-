#include <stdio.h>

void addition(long int no1,long int no2)
{
  // in this stack the addition takes place
    printf("%ld", no1 + no2);
}

int main(void)
{
// intially the code starts from here..
    printf("Enter number 1 for further operation :\n");
    long int no1;
    scanf("%ld", &no1);
// intially enter the number of the calculator
        printf("Enter code of the operation needed:\n 1. Add \t 2. Subtract \t 3. Multiply \t 4. Divide\n");
    int check;
    scanf("%d", &check);
    // check is used to whether we want to add or sub or do any operation..
    long int no2;
    printf("Enter number 2 for further operation :\n");
    scanf("%ld", &no2);
  // second number is used for to do the operation


    switch (check)
    {
      // switch function is used for the to the operation we have to do
    case 1:
        addition(no1, no2);
        break;
    case 2:
        subtraction(no1, no2);
        break;
    case 3:
        multiplication(no1, no2);
        break;
    case 4:
        division(no1, no2);
        break;
    }
}