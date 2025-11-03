// Write a Program which accept number from the user and return difference between summation of all its factors and non-factors.
#include<stdio.h>
int FactDiff(int iNo)
{
    int iFact = 0;
    int iFSum = 0;
    int iNFSum = 0;
    int iDiff = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iFact = 1; iFact < iNo; iFact++)
    {
        if(iNo % iFact == 0)
        {
            iFSum = iFSum + iFact;
        }

        else if(iNo % iFact != 0)
        {
            iNFSum = iNFSum + iFact;
        }
    }

    iDiff = iFSum - iNFSum;

    return iDiff;
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("The difference is: %d",iRet);

    return 0;
}