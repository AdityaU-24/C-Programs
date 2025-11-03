// Accept one character from the user and convert case of that character.
#include<stdio.h>
void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Conversion is: %c",cValue-32);
    }
    else if(cValue >= 'A', cValue <= 'Z')
    {
        printf("Conversion is: %c",cValue+32);
    } 
    else
    {
        printf("Enter a Character!!!");
    }
}  

int main()
{
    char cValue = '\0';

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    
    return 0;
}