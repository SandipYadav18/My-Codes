//  5. Write  a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iDiff = 0;
    int iFact = 0, iSum = 0;
  
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact += iCnt;
        }
        else if(iNo % iCnt != 0)
        {
            iSum += iCnt;
        }
        iDiff = iFact - iDiff;
    }
    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}