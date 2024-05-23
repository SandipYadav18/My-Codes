//  4. write a program which accept number from user and return multiplication of all digit.

#include<stdio.h>

int MultDigits(int iNo)
{
    int mult = 1;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        mult = mult * iDigit;
        iNo = iNo / 10;
    }
    return mult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}