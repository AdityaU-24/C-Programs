// Write a program which accepts three numbers and prints its multiplication.
#include<stdio.h>
int Multiply(int a, int b, int c)
{
    int iProd = 0;

    if (a == 0 || b == 0 || c == 0)
    {
        printf("0 is not allowed!!!");
    }

    iProd = a * b * c;
    return iProd;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    printf("Please enter three numbers: ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);
    
    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Product is: %d",iRet);

    return 0;
}