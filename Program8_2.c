//  2. Write a program which accept width & height of rectangle from user and calculate its area. (Area = width * height)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double Area =0;

    Area = fWidth * fHeight;

    return Area;
}
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle:%lf",dRet);

    return 0;
}