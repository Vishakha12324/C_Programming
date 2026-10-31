/////////////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Input         : Integer
//  Output        : Double
//  Description   : Accept area in square feet and return area in square metres
//  Date          : 01/11/2026
//  Author        : Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.092903;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square metres is %.6lf\n", dRet);

    return 0;
}
