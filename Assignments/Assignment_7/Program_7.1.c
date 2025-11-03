// Write a program which accept number from user and print that number of $ & * on screen.
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("$ * ");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Frequency: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}