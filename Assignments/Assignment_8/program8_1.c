/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Number
//  Input         :Integer
//  Output        :Void
//  Description   :Accept a number and display whether it is Large, Medium or Small
//  Date          :31/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{   
    if(iNo >100)
    {
        printf("Large");
    }
    else if(iNo<100 && iNo>=50)
    {
        printf("Medium");
    }
    else
    {
        printf("Small");
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

