/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Factorial
//  Input         :Integer
//  Output        :Integer
//  Description   :Accept a number and return the product of all odd numbers from N to 1
//  Date          :31/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo;iCnt >0;iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iMul = iMul* iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    
    printf("Even Factorial of number is %d", iRet);

    return 0;
}
