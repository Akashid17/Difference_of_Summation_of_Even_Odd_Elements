
#include<stdio.h>
#include <stdlib.h>

int Difference(int iArr[], int iLength)
{
    int iCount  = 0;

    for(int j = 0; j < iLength; j++)
    {
        if(iArr[j] % 2 == 0)
        {
            iCount += iArr[j];
        }
        else
        {
            iCount -= iArr[j];
        }
    }

    if(iCount < 0)
    {
        iCount = -iCount;
    }

    return iCount;
}

int main()
{
    int iSize = 0, iResult = 0;
    int *p = NULL;

    printf("Enter Count of Elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    iResult = Difference(p,iSize);

    printf("Result is %d\n",iResult);

    free(p);

    return 0;
}