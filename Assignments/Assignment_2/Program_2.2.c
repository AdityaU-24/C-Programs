//Accept one number from user and print that number of * on screen.
#include<stdio.h>
void Display(int iNo)
{
    if(iCnt < 0)
    {
        iCnt = -iCnt;
    }

    while(iNo>0)
    {
        printf("*");
        iCnt--;
    }
}

int main()
{
    int iValue = 0;
    
    printf("enter the number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}