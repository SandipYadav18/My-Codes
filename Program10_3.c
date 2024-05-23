//  3. Write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>

int CountTwo(int iNo)
{
    int frequency = 0;

    while(iNo != 0)
    {
        int iDigit = iNo % 10;

        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}