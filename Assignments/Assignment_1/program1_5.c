/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Input         : Integer
//  Output        : Void
//  Description   : Prints the specified number of stars on the screen
//  Date          : 21/10/2026
//  Author        : Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }

}

int main()
{
    int iValue = 0;
    iValue = 5;
    
    Accept(iValue);

    return 0;
}