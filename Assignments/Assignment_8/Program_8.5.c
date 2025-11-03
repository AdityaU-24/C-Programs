// Write a Program which accept number from user and display its table reverse order.
#include<stdio.h>
void DsiplayTableRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo*iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    DsiplayTableRev(iValue);

    return 0;
}  