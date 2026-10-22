/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer 
//  Output        : Void 
//  Description   : Displays the specified number of stars
//  Date          : 21/10/2026
//  Author        : Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}