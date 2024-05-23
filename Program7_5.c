//  5. Write a program which returns difference between Even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt <= iNo; iCnt+= 2)
    {
        iOddFact = iOddFact * iCnt;
    }


    for(iCnt =2; iCnt <= iNo; iCnt+= 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    return iEvenFact - iOddFact;


}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}