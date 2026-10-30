/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Factorial
//  Input         :Integer
//  Output        :Integer
//  Description   :Display Factorial of number
//  Date          :31/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{   int iCnt = 0;
    int iMul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >0; iCnt--)
    {
        iMul = iMul * iCnt;
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}

