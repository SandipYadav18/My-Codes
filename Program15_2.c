//  2. Accept number of rows and columns from user and display below pattern.
/*  2   4   6   8   10
    1   3   5   7   9
    2   4   6   8   10
    1   3   5   7   9
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0) 
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", 2 * j); 
            }
        }
        else 
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", 2 * j - 1); 
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;

}