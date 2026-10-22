/////////////////////////////////////////////////////////////////////////
//
//  Function Name :CheckVotingEligibility
//  Input         :Integer
//  Output        :Void
//  Description   :Checks Voting Eligibility
//  Date          :22/10/2026
//  Author        :Vishakha Vijay Jadhav
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iage)
{
    if(iage > 18)
    {
        printf("Eligible for Voting");
    }
    else if(iage < 0)
    {
        printf("Invalid Age");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iAge = 0;
    

    printf("Enter your age: \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);
    return EXIT_SUCCESS;
}