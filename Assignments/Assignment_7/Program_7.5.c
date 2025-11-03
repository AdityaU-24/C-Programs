// Write a program which accept N and print first 5 multiples of N.
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= 6; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}