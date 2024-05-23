//  5. Write a program which accept number from user and count frequency of such a digit which are less than 6.

#include<stdio.h>

int CountFour(int iNo)
{
    int frequency = 0;

    while(iNo != 0)
    {
        int iDigit = iNo % 10;

        if(iDigit < 6)
        {
            frequency++;
        }
        iNo = iNo / 10;
    }
    return frequency;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}