/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Factorial
//  Input         :Integer
//  Output        :Integer
//  Description   :Accept a number and return the difference between its even and odd factorials
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
    
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo;iCnt >0;iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iMul = iMul* iCnt;
        }

    }
    return iMul;
}


int FactorialDiff(int iNo)
{
    int iEven = 0, iOdd = 0, iDiff = 0 ;

    if(iNo < 0 )
    {
        iNo= - iNo;
    }

    iEven = EvenFactorial(iNo);
    iOdd = OddFactorial(iNo);

    iDiff = iEven - iOdd;
 return iDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    
    printf("Differnce of Factorial is %d", iRet);

    return 0;
}
