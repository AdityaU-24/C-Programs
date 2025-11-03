// Write a program which accept number from the user and print even factors of that number.
#include<stdio.h>
void DisplayEvenFactors(int iNo)
{
    int i = 0;
    
    if(iNo <= -iNo)
    {
        iNo = -iNo;
    }

    for(i = 1;i <= (iNo/2); i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}