//  3. Write a program which accept distance in kilometer and convert it into meter.(1 kilometer = 1000 meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;

    return iMeter;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distane :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter:%d meter",iRet);

    return 0;
}