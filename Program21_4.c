//  4. Accept N number from user and accept Range, Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStat, int iEnd)
{
    int i = 0;

    for ( i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iStat && Arr[i] <= iEnd)
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, ivalue1 = 0, ivalue2 = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the starting point :");
    scanf("%d",&ivalue1);

    printf("Enter the ending point :");
    scanf("%d",&ivalue2);

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

    Range(p, iSize , ivalue1, ivalue2);

    free(p);

    return 0;
}