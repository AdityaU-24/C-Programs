// Check Leap Year.
#include<stdio.h>
void CheckLeapYear(int iYear)
{
    if(iYear % 4 == 0)
    {
        printf("This is a Leap Year.");
    }
    else
    {
        printf("This is not a Leap Year.");
    }
}
int main()
{
    int yr = 0;

    printf("Enter the year: \n");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}