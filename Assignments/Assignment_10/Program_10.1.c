// Write a program which accepts radius of circle from user and calculate its area. 
#include<stdio.h>
double CircleArea(float fRadius)
{
    const float PI = 3.14;
    
    double Area = PI * fRadius * fRadius;
    
    return Area;
}   
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The Area is: %lf\n",dRet);

    return 0;
}