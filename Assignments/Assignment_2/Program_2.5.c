// Accept number from the user and check whether number is even or odd.
#include<stdio.h>
#include<stdbool.h>
bool CheckEvenOdd(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
} 

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet = true)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }

    return 0;
}