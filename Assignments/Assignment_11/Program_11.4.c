// Write a Program which accept range from user and return addition of all even numbers in between that range.
#include<stdio.h>
int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    if(iStart > iEnd || (iStart || iEnd < 0))
    {
        printf("Invalid Input!!!");
    }
    
    for(iStart; iStart <= iEnd; iStart++)
    {
        if(iStart % 2 == 0)
        {
            iSum = iSum + iStart;
        }   
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

    iRet = RangeSumEven(iValue1, iValue2);

    printf("The Addition of Even numbers in the Range is: %d",iRet);

    return 0;
}