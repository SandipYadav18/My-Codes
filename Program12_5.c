//  5. Accept number fromuser and display below pattern.
//      2   4   6   8   10  12  14  16

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo * 2; iCnt++)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}