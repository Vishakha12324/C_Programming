/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CalculateElectricityBill
//  Input         :Integer
//  Output        :void
//  Description   :Calculates electricity bill based on consumed units
//  Date          :22/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    if(iUnits < 0)
    {
        printf("Invalid input");
        return;
    }
    float fBill = 0.0f;
    if(iUnits <= 100 )
    {
        fBill = iUnits*5;
        printf("Bill = %.2f",fBill);
    }
    else if(iUnits>100 && iUnits<=200)
    {
        fBill = (500+(iUnits-100)*7);
        printf("Bill = %.2f",fBill);
    }
    else{
        fBill = (1200+(iUnits-200)*10);
        printf("Bill = %.2f",fBill);
    }
}
int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}