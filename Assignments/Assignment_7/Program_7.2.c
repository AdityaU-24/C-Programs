// Write a program which accept number from the user and pirnt number till that number.
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}