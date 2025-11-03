//write a program to convert square feet to square metre.
#include<stdio.h>
double SquareMetre(int iValue)
{
    double dSquareMetre = (iValue * 0.0929);
    return dSquareMetre;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMetre(iValue);

    printf("The Area in Square Metre is: %lf",dRet);

    return 0;
}