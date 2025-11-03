// Sum of all even factors (exclude the number itself).
#include<stdio.h>
int Sum_Of_Even_Factors(int number)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(number <= 0)
    {
        number = -number;
    }
    for(iCnt = 1; iCnt <= (number/2); iCnt++)
    {
        if(number % iCnt == 0 && iCnt % 2 ==0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}
int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("%d\n",Sum_Of_Even_Factors(number));

    return 0;
}