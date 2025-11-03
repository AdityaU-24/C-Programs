// Accept one number and check whether it is divisible by 5 or not 
#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo1)
{
    if((iNo1 % 5) == 0)
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
    int iValue  = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("The number is Divisible by 5");
    }
    else 
    {
        printf("The number is not Divisible by 5");
    }

    return 0;
}