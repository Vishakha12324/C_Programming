
////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Input         : Integer Integer
//  Output        : void
//  Description   : Accept number or row & column from user and print specific pattern
//  Date          : 9/11/2026
//  Author        : Vishakha vijay jadhav
//
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ccount = '\0';

    for(i = 1; i < iRow; i++)
    {
        if(i % 2 != 0)
        {
           ccount = 'A'; 
        }else
        {
            ccount = 'a';
        }
        
        for(j = 1; j < iCol; j++)
        {
            printf("%c\t",ccount);
            ccount++;
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row and column :\n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}