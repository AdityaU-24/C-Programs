// Write a Program which accepts number from the user and display all its non factors.
#include<stdio.h>
void NonFact(int iNo)
{
    int iFact = 0;

    if(iNo <= 0);
    {
        iNo = -iNo;
    }

    for(iFact = 1; iFact <= (iNo/2); iFact++)
    {
        if(iNo % iFact != 0)
        {
            printf("%d\t",iFact);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
