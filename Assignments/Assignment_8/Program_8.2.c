// Accept single digit number from user and print it into word.
#include<stdio.h>
void Display(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    if(iNo < 10)
    {
        if(iNo == 1)
        {
            printf("One");
        }
        if(iNo == 2)
        {
            printf("Two");
        }
        if(iNo == 3)
        {
            printf("Three");
        }
        if(iNo == 4)
        {
            printf("Four");
        }
        if(iNo == 5)
        {
            printf("Five");
        }
        if(iNo == 6)
        {
            printf("Six");
        }
        if(iNo == 7)
        {
            printf("Seven");
        }
        if(iNo == 8)
        {
            printf("Eight");
        }
        if(iNo == 9)
        {
            printf("Nine");
        }
    }
    else if(iNo >= 10)
    {
        printf("Invalid Number!");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
} 