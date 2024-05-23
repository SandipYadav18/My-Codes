//  5. Write a program which accept area feet anf=d convert it into sequare meter. (1 squence feet = 0.0929 Sequence meter)

#include<stdio.h>

double sequareMeter(int iValue)
{
    const double Squarefeet = 0.0929;
    double dSquare = 0;

    dSquare = iValue * Squarefeet;

    return dSquare;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in sequare feet: \n");
    scanf("%d",&iValue);

    dRet = sequareMeter(iValue);

    printf("Area in square meters:%f\n",dRet);

    return 0;
}