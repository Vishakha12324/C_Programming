/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Display
//  Input         :Integer
//  Output        :Integer
//  Description   :Accept an amount in US dollars and return its equivalent value in Indian rupees
//  Date          :31/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
   int INR = 0;
   INR = iNo * 70;
   return INR;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR %d",iRet);

    return 0;
}

