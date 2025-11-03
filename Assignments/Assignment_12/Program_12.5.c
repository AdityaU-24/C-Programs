// Check if number is Divisible by 5.
#include<stdio.h>
#include<stdbool.h>
bool Is_Divisible_By_Five(int number)
{
    if(number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("%s\n",Is_Divisible_By_Five(number) ? "Yes":"No");

    return 0;
}
