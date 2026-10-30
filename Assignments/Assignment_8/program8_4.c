/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Table
//  Input         :Integer
//  Output        :Void
//  Description   :Accept a number and display table of that number
//  Date          :31/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for(iCnt = 1;iCnt<=10; iCnt++)
    {
        iMul= iNo * iCnt;
        printf("%d\t",iMul);
    }
    

}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

