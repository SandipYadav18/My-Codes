//  5. Accept N number from user and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, iSum = 0, iNum = 0;
    for ( i = 0; i < iLength; i++)
    { 
        iNum=Arr[i];
        while(iNum>0)
        {
            iSum += iNum % 10;
            iNum/=10;
        }
        printf("%d\t",iSum);
        iSum = 0;
    }
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

    DigitsSum(p, iSize);

    free(p);

    return 0;
}