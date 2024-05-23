//  3. Accept number of rows and number of columns from user and display below pattern.
/*  1    2   3   4   5
    1    2           5
    1        3       5
    1            4   5
    1    2   3   4   5
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j= 0;

    for ( i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if(i==j || i==1 || i==iRow || j==1 || j==iCol)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }   
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);

    return 0;
}