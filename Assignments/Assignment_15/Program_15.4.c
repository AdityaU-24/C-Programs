// Write a program which accept a number from user and return the multiplication of all digits .
#include<stdio.h>
int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iProd = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
    
        iProd = iProd * iDigit;

        iNo = iNo / 10;
    }
    return iProd;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}