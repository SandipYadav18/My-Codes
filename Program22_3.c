//  3. Accept N number from user and return the difference between largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[], int iLength)
{
    int i = 0, Min = Arr[0], Max = Arr[0], Diff = 0;

    for ( i = 0; i < iLength; i++)
    {
        if(Arr[i] < Min)
        {
           Min = Arr[i];
        }
        if (Arr[i]> Max)
        {
            Max = Arr[i];
        }
    }
    Diff = Max - Min;
    return Diff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memeory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;
}