//  2. Write aprogram which accept number from user and return the count of odd digits.

#include<stdio.h>

int CountOdd(int iNo)
{
    int odd = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            odd++;
        }
        iNo = iNo / 10;
    }
    return odd;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}