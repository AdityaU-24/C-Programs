// Write a program which accept a number from user and return the count of even digits in it.
#include<stdio.h>
int CountEven(int iNo)
{
    int iDigit = 0;
    int iFreq = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
    
        if(iDigit % 2 == 0)
        {
            iFreq++;    
        }   

        iNo = iNo / 10;
    }
    return iFreq;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}