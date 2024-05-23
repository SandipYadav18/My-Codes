//  3. Accept number of rows and number of columns from user and display below pattern.
/*  a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
    1   2   3   4   5
*/
#include<Stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch = 'a';
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
          if(i % 2 != 0)
          {
            printf("%c\t",ch + j -1);
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