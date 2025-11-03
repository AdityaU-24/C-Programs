// Find sum of first N even numbers.
#include<stdio.h>
int sum_even_numbers(int limit)
{
    int iNo = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iNo = 1; iNo <= limit; iNo++)
    {
        if(iNo % 2 == 0)
        {
        iSum = iSum + iNo;
        }
    }
    return iSum;
}
int main()
{
    int limit;

    printf("Enter the number: ");
    scanf("%d",&limit);

    printf("%d",sum_even_numbers(limit));

    return 0;
}