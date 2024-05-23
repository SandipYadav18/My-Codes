//  3. Write a program to find even factorial of givan number.

#include<Stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =2; iCnt <= iNo; iCnt+= 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}