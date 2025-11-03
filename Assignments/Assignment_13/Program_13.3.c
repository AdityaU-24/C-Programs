// Print all odd numbers upto N.
#include<stdio.h>
void Print_Odd_numbers(int limit)
{
    int iNo = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
     
    for(iNo = 1; iNo <= limit; iNo++)
    {
        if(iNo % 2 != 0)
        {
        printf("%d\t",iNo);
        }
    }
}
int main()
{
    int limit;

    printf("Enter the number: ");
    scanf("%d",&limit);

    Print_Odd_numbers(limit);

    return 0;
}