//  2. Accept number of rows and number of columns from user and display below pattern.
/*  A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 1;
    int j = 1;
    char ch = 0;

    for(i = 1; i <= iCol; i++)
    {
        for(j = 1; j <= iRow; j++)
        {
           if(i % 2 != 0)
           {
              ch = 64;
              printf("%c",ch + j);
           }
           else
           {
              ch = 96;
              printf("%c",ch + j);
           }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}