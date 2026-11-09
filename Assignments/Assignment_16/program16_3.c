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

void pattern(int iRow,int iCol)
{
int i=0,j =0;
int icount = 0;
char ccount = 'a';    
    for(i =1; i<= iRow; i++)
    {
        if(i % 2 != 0)
        {
             ccount = 'a';
        }
        else
        {
             icount = 1;
        }
        
        for(j=1;j<=iCol;j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ccount);
                ccount++;
            }else
            {
                printf("%d\t",icount);
                icount++;
            }
           
           
        }
        printf("\n");
    }
}
int main()
{
int iValue1 = 0;
int iValue2 = 0;


printf("enter 1st & 2nd number:\n");
scanf("%d %d",&iValue1, &iValue2);

pattern(iValue1,iValue2);
    return EXIT_SUCCESS;
}