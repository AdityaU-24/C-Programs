// Write a Program which accepts a number fromthe user and return summation of all its non factors.
#include<stdio.h>

int SumNonFact(int iNo)
{
    int iFact = 0;
    int iSum = 0;

    for(iFact = 1; iFact <= (iNo/2); iFact++)
    {
        if(iNo % iFact != 0)
        {
            iSum = iSum + iFact;
        }                                                                                                
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}
