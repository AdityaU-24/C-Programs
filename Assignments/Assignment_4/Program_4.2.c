//write a program which accepts number from user and display its factors in decreasing order
#include<stdio.h>

void FactRev(int iNo)
{
    int iFact = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("The Result is: ");
    
    for(iFact = (iNo/2); iFact >= 1; iFact--)
    {
        if(iNo % iFact == 0)
        {
            printf("%d\t",iFact);
        }
    }
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    FactRev(iValue);    

    return 0;
}