/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall()
//  Input         : string
//  Output        : void
//  Description   : Accept string from user, count number of small characters. 
//  Date          : 14/11/2026
//  Author        : Vishakha vijay jadhav
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while( *str != '\0')
    {
        if(*str >= 'a' &&  *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Entre  string:\n");
    scanf("%[^\n]s",arr);

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}