// Write a program which accepts distance in kilometre and convert it into metre
#include<stdio.h>
int KMToMetre(int iKM)
{
    int M = iKM * 1000;
    return M;
}   
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Value in Kilometre: ");
    scanf("%d",&iValue);

    iRet = KMToMetre(iValue);

    printf("The Value in Metre is: %d\n",iRet);

    return 0;
}  