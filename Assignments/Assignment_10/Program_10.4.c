// Write a Program which accepts temperature in Fahrenheit and convert it into Celsius.
#include<stdio.h>
double FhToCs(float fTemp)
{
    double fCel = (fTemp - 32) * (5/9);
    return fCel;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("The temperature in Celsius is: %lf",dRet);

    return 0;
}