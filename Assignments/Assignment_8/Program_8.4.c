// Write a Program which accept number from user and display its Table.
#include<stdio.h>
void DsiplayTable(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    DsiplayTable(iValue);

    return 0;
} 