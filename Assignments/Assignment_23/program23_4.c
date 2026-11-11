/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Input         : Integer Integer
//  Output        : void
//  Description   : Accept a string from user and print digits from it.
//  Date          : 11/11/2026
//  Author        : Vishakha vijay jadhav
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
          printf("%c",*str);   
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^\n]s",arr);

    DisplayDigit(arr);

    return 0;
}