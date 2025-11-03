// Write a program to accept a number from the user and display multiplication of its factors
#include<stdio.h>

int MultFact(int iNo)
{
    int iFact = 0;
    int iMult = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iFact = 1; iFact <= (iNo/2); iFact++)
    {
        if(iNo % iFact == 0)
        {
            iMult = iMult * iFact;
        }
    }
    
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("The result is: %d",iRet);

    return 0;
}