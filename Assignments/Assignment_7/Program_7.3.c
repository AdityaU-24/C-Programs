// Write a program which accepts number from the user and print its number line.
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = -iNo;
    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}