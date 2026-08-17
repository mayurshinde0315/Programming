/*
Accept N number from user and accept one another number as NO,
return index of last occuerence of that NO.
*/
#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iIndex = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
    }
    return iIndex;
}

int main()
{
    int iSize =0 , iRet = 0, iCnt=0;
    int iValue = 0;
    int *p=NULL;

    printf("Enter number of Elements");
    scanf("%d",&iSize);

    printf("Enter number");
    scanf("%d",&iValue);

    p= (int*)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to Allocate the Memory\n");
        return -1;
    }
    printf("Enter %d elements: \n",iSize);

    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("Enter Elements %d",iCnt+1);
        scanf("%d",&p[iCnt]);

    }

    iRet = LastOcc (p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number \n");
    }
    else
    {
        printf("Last occurrence of number %d\n", iValue, iRet);
    }

    free(p);

    return 0;

}