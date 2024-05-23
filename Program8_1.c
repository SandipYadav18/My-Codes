//  1. Write a program which accept redius of circle from user and calculate its area.
//      Consider value of PI as 3.14 (Area = PI * Radius * Radius)

#include<stdio.h>

double circleArea(float fRadius)
{
    double Area = 0;
    const double PI = 3.14;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = circleArea(fValue);

    printf("Area of circle is %lf:",dRet);

    return 0;
}