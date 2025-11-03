// Write a program which accept range from user anf return addition of all numbers in between that range.
#include<stdio.h>
int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    if(iStart > iEnd || (iStart || iEnd < 0))
    {
        printf("Invalid Input!!!");
    }
    
    for(iStart; iStart <= iEnd; iStart++)
    {
        iSum = iSum + iStart;   
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("The Addition is: %d",iRet);

    return 0;
} 