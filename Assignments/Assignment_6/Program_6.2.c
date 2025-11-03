// Write a program which accept one number from the user and check whether that number is greater than 100 or not.
#include<stdio.h>
#include<stdbool.h>
bool ChkGreater(int iNum)
{
    if(iNum > 100)
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRes = false;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    bRes = ChkGreater(iValue);

    if(bRes = true)
    {
    printf("Greater");
    }
    else 
    {
    printf("Smaller");
    }
    
    return 0;
} 