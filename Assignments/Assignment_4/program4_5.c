/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CheckDivisibility
//  Input         :Integer
//  Output        :Void
//  Description   :Checks Divisibility by 5
//  Date          :22/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0 )
    {
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);
    return EXIT_SUCCESS;
}