/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Input         : Float
//  Output        : Double
//  Description   : Accept radius of a circle and return its area
//  Date          : 01/11/2026
//  Author        : Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
   double dArea = 0.0;
   float PI = 3.14;

   dArea = PI * fRadius * fRadius;

   return dArea;
}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    
    printf("Area of circle is %.4f", dRet);

    return 0;
}
