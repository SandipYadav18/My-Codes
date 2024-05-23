//  4. Write a program which accepat number from user and count frequency of 4 in it.

#include<stdio.h>

int CountFour(int iNo)
{
    int frequency = 0;

    while(iNo != 0)
    {
        int iDigit = iNo % 10;

        if(iDigit == 4)
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