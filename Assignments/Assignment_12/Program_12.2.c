// Count total factors of a number.
#include<stdio.h>
int count_factors(int number)
{
    int iCnt = 0;
    int iNo = 0;

    for(iCnt = 1; iCnt <= (number/2); iCnt++)
    {
        if(number % iCnt == 0)
        {
            iNo++;
        }
    }
    
    return iNo;
}

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d",&number);

    printf("%d\n",count_factors(number));

    return 0;
}