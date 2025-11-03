// Write a program which accept name from the user and print that name
#include<stdio.h>
 
int main()
{
    char Name[30];
    printf("Enter Full Name:\n");
    scanf("%s",&Name);
    printf("Your Name is %s",Name);
    return 0;
}