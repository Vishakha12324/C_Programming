/////////////////////////////////////////////////////////////////////////
//
//  Function Name :DisplayCovert
//  Input         :Character
//  Output        :Void
//  Description   :Accepts one character from user and convert case of that character
//  Date          :21/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c", CValue - 32);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}