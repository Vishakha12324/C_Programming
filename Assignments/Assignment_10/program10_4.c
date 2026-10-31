/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Input         : Float
//  Output        : Float
//  Description   : Accept temperature in Fahrenheit and return temperature in Celsius
//  Date          : 01/11/2026
//  Author        : Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

float FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0/9.0);
    
    return dCelsius;  
}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temprature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    
    printf("Fahrenheit to Celsius is %f\n", dRet);

    return 0;
}
