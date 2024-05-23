//  1. Write a program which accept number from user and print that number of $ & * on screen.

#include<stdio.h>

void Pattern(int iNo)
{
    int icnt = 0;

    for(icnt =1; icnt <= iNo; icnt++)
    {
        printf("$\t*\t",icnt,icnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}