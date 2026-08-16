/*
Accept N number from user check weather that numbers contains 11 in it or not.
Input : N  6
Elements: 85 66 3 80 93 88
Output : 11 is Present
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
           return TRUE; 
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt= 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of Elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to Allocate the Memory\n");
        return -1;
    }

    printf("Enter elements: \n");

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet=check(p, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }
    free(p);

    return 0;

}