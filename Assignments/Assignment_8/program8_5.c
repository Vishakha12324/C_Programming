/////////////////////////////////////////////////////////////////////////
//
//  Function Name :TableRev
//  Input         :Integer
//  Output        :Void
//  Description   :Accept a number and display table of that number in reverse order
//  Date          :31/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for(iCnt = 10; iCnt>0; iCnt--)
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

    TableRev(iValue);

    return 0;
}

