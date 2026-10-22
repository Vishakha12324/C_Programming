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
        printf("Bill = %d",iUnits*5);
    }
    else if(iUnits>100 && iUnits<=200)
    {
        printf("Bill = %d",(500+(iUnits-100)*7));
    }
    else{
        printf("Bill = %d",(1200+(iUnits-200)*10));
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