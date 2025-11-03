// Print all numbers from 1 to N.
#include<stdio.h>
void Print_numbers(int limit)
{
    int iNo = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }  
    
    for(iNo = 1; iNo <= limit; iNo++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int limit;

    printf("Enter the number: ");
    scanf("%d",&limit);

    Print_numbers(limit);

    return 0;
}