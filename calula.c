#include <stdio.h>

void addition(long int a,long int b)
{
    printf("%ld", a + b);
}

int main()
{
    printf("Enter num1:\n");
    long int t;
    scanf("%ld", &t);
    long int r;
    printf("Enter num2:\n");
    scanf("%ld", &r);
    addition(t,r);
}