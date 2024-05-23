//  3. Write a program which accept number from user and return the count of digits n between 3 and 7.

#include<stdio.h>

int CountRange(int iNo)
{
    int range = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit >= 3 && iDigit <= 7)
        {
            range++;
        }
        iNo = iNo / 10;
    }
    return range;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}