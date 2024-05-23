//  5. Accept number of rows and columns from user and display below pattern.
/*  1   2   3   4
    2   3   4   5
    3   4   5   6
    4   5   6   7
*/

#include<Stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j < i + iCol; j++)
        {
            if(i>j)
            {
                printf("");
            }
            else
            {
                printf("%d\t",j);
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