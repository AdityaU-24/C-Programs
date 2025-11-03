// Accept amount i US Dollar and return its corresponding value in Indian currency. 
#include<stdio.h>
int USDToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70;
    
    return iINR;
} 
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Value in Dollars: ");
    scanf("%d",&iValue);

    iRet = USDToINR(iValue);

    printf("Value in INR is: %d",iRet);

    return 0;
}