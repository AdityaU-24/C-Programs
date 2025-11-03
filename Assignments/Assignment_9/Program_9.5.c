// Write a Program which returns the difference between Even and Odd Factorials of given number.
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 1, iEFact = 1, iOFact = 1, iDiff = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    while(iCnt <= iNo)
    {
        if(iCnt % 2 == 0)
        {
            iEFact = iEFact * iCnt;        
        }
        
        iCnt++;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {
        if(iCnt % 2 != 0)
        {
            iOFact = iOFact * iCnt;        
        }
        
        iCnt++;
    }
    
    return iDiff = iEFact - iOFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Odd factorial of %d is: %d\n",iValue,iRet);

    return 0;
}