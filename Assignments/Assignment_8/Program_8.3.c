// Write a program to find Factorial of given number.
#include<stdio.h>
int Factorial(int iNo)
{
    int iFact = 1;

    int iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact =  iFact * iCnt;
        iCnt++;
    }

    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is: %d",iValue,iRet);

    return 0;
} 