// Write a program which accept a number from user and return difference between summation of even digits and summation of Odd digits .
#include<stdio.h>
int CountDiff(int iNo)
{
    int iDigit = 0, iESum = 0, iOSum = 0, iDiff = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
    
        if(iDigit % 2 == 0)
        {
            iESum = iESum + iDigit;    
        }   
        else if(iDigit % 2 != 0)
        {
            iOSum = iOSum + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = iESum - iOSum;

    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}