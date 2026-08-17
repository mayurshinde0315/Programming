/*
Accept N number from user and accept one another number as NO,
check whether NO is present or not.
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize =0 , iRet = 0, iCnt=0, iValue = 0;
    int *p=NULL; 
    BOOL bRet = FALSE;

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

    bRet =check (p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is not Present");
    }

    free(p);

    return 0;

}