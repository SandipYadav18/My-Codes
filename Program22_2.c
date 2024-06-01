//  2. Accept N number from user and return the smallest number.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
    int i = 0, Min = Arr[0];

    for ( i = 0; i < iLength; i++)
    {
        if(Arr[i] < Min)
        {
           Min = Arr[i];
        }
    }
   return Min;
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

    iRet = Minimum(p, iSize);

    printf("Smallest Number is %d",iRet);

    free(p);

    return 0;
}