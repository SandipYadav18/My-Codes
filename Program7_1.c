//  1. Write a program which accept number from user and display below pattern.

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*\t",icnt);
    }
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("#\t",icnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}