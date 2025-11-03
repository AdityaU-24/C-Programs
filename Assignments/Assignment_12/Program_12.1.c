// Print all Factors of a number.
#include<stdio.h>
void Print_Factors(int number)
{
    int iCnt = 1;
    
    for(iCnt; iCnt <= (number/2); iCnt++)
    {
       if(number % iCnt == 0)
       {
            printf("%d\t",iCnt);
       }
    }
}
int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d",&number);

    Print_Factors(number);

    return 0;
}