/////////////////////////////////////////////////////////////////////////
//
//  Function Name :DisplayFactor
//  Input         :Integer
//  Output        :Void
//  Description   :Prints Even factors of given input
//  Date          :21/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdio.h>

void DisplayFactor(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    int i=0;
    for(i=1;i<iNo;i++)
    {
        if((iNo %i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
    

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}