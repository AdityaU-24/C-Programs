// Write a program to accept one number from user and print that number of even numbers on screen.
#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iDis = 0;

    if(iNo <= 0)
    {
        printf("Please enter a +ve number");
        return;
    }

    iCnt = 1;
    while(iCnt<=iNo)
    {               
        iDis = iCnt*2;
        printf("%d\t",iDis);
        iCnt++;
    }
} 

int main()
{
    int iValue = 0;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}