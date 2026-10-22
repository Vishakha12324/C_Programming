/////////////////////////////////////////////////////////////////////////
//
//  Function Name :PrintEven
//  Input         :Integer
//  Output        :Void
//  Description   :Accepts one number from user and prints that number of even numbers
//  Date          :21/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("%d\t", i*2);
    }
    

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}