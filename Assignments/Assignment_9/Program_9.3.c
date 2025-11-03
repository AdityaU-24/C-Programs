// Write a program to find even factorial of given number.
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 1;
    int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= iNo)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;        
        }
        
        iCnt++;
    }
    
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of %d is: %d",iValue,iRet);

    return 0;
}