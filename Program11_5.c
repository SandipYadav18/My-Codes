//  5. Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{
    int SumEven = 0;
    int sumOdd = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            SumEven = SumEven + iDigit;
        }
        else
        {
            sumOdd = sumOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return SumEven - sumOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}