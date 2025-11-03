// Write a program which accepts total marks and obtained marks from the user and calculate the percentage.
#include<stdio.h>
float Percentage(int iObt, int iTotal)
{
    float iPer = 0.0;

    iPer = (iObt/iTotal) * 100;

    return iPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float iRet = 0.0;

    printf("Enter Total marks: ");
    scanf("%d",&iValue2);

    printf("\nEnter marks obtained: ");
    scanf("%d",&iValue1);

    iRet = Percentage(iValue1, iValue2);

    printf("\nPercentage obtained is: %f",iRet);

    return 0;
}