/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CheckEvenOdd
//  Input         :Integer
//  Output        :Void
//  Description   :Checks Even or Odd Number
//  Date          :22/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("It is Even");
    }
    else
    {
        printf("It is Odd");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}