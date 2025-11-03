// Find sum of first N natural numbers.
#include<stdio.h>
int sum_natural_numbers(int limit)
{
    int iNo = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iNo = 1; iNo <= limit; iNo++)
    {
        iSum = iSum + iNo;
    }
    return iSum;
}
int main()
{
    int limit;

    printf("Enter the number: ");
    scanf("%d",&limit);

    printf("%d\n",sum_natural_numbers(limit));

    return 0;
}