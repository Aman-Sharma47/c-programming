// Program to find addition, subtracton, multiplication and remainder of two numbers.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int c=a+b;
    printf("\n Addition of: %d",c);
    int d=a-b;
    printf("\n Difference of: %d",d);
    int e=a*b;
    printf("\n Multiplication of:%d",e);
    int f=a%b;
    printf("\n Remainder of a and b:%d",f);
    return 0;
}
