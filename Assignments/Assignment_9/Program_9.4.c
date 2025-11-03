// write a program to find odd factorial of the given number.
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 1;
    int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= iNo)
    {
        if(iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of %d is: %d\n",iValue,iRet);

    return 0;
}