// Accept a Character from user and Check whether that Character is vowel or not.
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cValue)
{
    if(cValue == 'a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("This is a Vowel");
    }
    else if(bRet == FALSE)
    {
        printf("This is not a Vowel");
    }

    return 0;
}