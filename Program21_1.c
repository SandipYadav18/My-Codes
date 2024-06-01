//  1. Accept N number from user and accept one another number as NO, check whether No is present or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, ivalue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the number :");
    scanf("%d",&ivalue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memeory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Ente element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize , ivalue);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}