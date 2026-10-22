/////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Input         : Integer
//  Output        : Boolean
//  Description   : Checks whether given number is Even
//  Date          : 21/10/2026
//  Author        : Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("It is Even");
    }
    else
    {
        printf("It is Odd");
    }

    return 0;
}