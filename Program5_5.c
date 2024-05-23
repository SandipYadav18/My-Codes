// 5. Write a program which accept N and Print first 5 MUltiple of N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt =1; iCnt <=5; iCnt++)
    {
        printf("%d x %d = %d\n",iNo , iCnt,iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}