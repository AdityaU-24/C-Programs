// Check Positive, Negative or Zero.
#include<stdio.h>
void CheckNumberType(int iNum)
{
    if(iNum > 0)
    {
        printf("The number is Positive");
    }
    else if(iNum < 0)
    {
        printf("The number is Negative");
    }
    else
    {
        printf("The number is Zero");
    }
}
int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d",&number);
    
    CheckNumberType(number);

    return 0;
}