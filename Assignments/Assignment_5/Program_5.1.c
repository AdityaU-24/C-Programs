// Check Even or Odd
#include<stdio.h>
void CheckEvenOdd(int iNum)
{
    if(iNum <= 0)
    {
        iNum = -iNum;
    }

    if(iNum % 2 == 0)
    {
        printf("The number is Even! ");
    }
    else if(iNum % 2 != 0)
    {
        printf("The numebr is Odd!");
    }
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}