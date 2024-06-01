//  4. Accept N number from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iLength)
{
    int i = 0, iCnt = 0, iNum = 0;
    for ( i = 0; i < iLength; i++)
    { 
        iNum=Arr[i];
        while(iNum>0)
        {
            iCnt++;
            iNum/=10;
        }
        (iCnt!=3)?iCnt=0:printf(" %d ",Arr[i]),iCnt=0;
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

    Digit(p, iSize);

    free(p);

    return 0;
}