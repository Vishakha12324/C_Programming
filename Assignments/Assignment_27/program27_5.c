/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse()
//  Input         : String
//  Output        : void
//  Description   : Accept string from user and reverse the string. 
//  Date          : 14/11/2026
//  Author        : Vishakha vijay jadhav
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0;

    while( *str != '\0')
    {
        iCnt++;
        str++;
    }
    
    for(int i = iCnt - 1; i>=0; i--)
    {
        printf("%c",str[-(iCnt - i)]);
    }

}

int main()
{
    char arr[20];

    printf("Entre  string:\n");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    return 0;
}