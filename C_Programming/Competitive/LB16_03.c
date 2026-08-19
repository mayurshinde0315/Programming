/*
Accept N number from user and return the difference between largest and 
smallest number.
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference (int Arr[], int iLength)
{
    int iCnt = 0;

    int iMin = Arr[0] , iMax =Arr[0];
       for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr [iCnt] > iMax)
        {
            iMax = Arr[iCnt];  
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];  
        }
        
    }
    return (iMax - iMin);
}

int main()
{
    int iSize =0 , iRet = 0, iCnt=0;
    int *p=NULL;
    int iValue = 0;

    printf("Enter number of Elements");
    scanf("%d",&iSize);

    printf("Enter the number");
    scanf("%d",&iValue);

    p= (int*)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to Allocate the Memory\n");
        return -1;
    }
    printf("Enter %d elements: \n",iSize);

    for (iCnt=0; iCnt<iSize; iCnt++)
{
        printf("Enter Elements %d",iCnt+1);
        scanf("%d",&p[iCnt]);
}

  iRet = Difference(p,iSize);

  printf("Lowest number is %d", iRet);

    free(p);

    return 0;
}