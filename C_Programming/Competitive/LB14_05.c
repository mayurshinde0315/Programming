/*
Accept N number from user and accept one another number as NO,
return frequency of NO from it.
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
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

    iRet = Frequency(p,iSize,iValue);

    printf(" Frequency of %d is : %d\n",iRet);

    
    free(p);

    return 0;

}