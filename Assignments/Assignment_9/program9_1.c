/////////////////////////////////////////////////////////////////////////
//
//  Function Name :Display
//  Input         :Integer
//  Output        :Void
//  Description   :Accept a number and display N stars followed by N hashes
//  Date          :31/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int j = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt =1;iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }

    for(j =1;j<=iNo; j++)
    {
        printf("#\t");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

