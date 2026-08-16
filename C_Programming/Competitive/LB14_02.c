/* Accept N number from user and diference between frequency Of Even or Odd Numbers.
Input : N  7
Elements: 85 66 3 80 93 88 90
Output : 7
*/

#include<stdio.h>
#include<stdlib.h>

int CountEvenOdd(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 2) == 0)||((Arr[iCnt] % 2) != 0 ))
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize =0 , iRet = 0, iCnt=0;
    int *p=NULL;

    printf("Enter number of Elements");
    scanf("%d",&iSize);

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

    iRet=CountEvenOdd(p,iSize);

    printf("Frequency of even or Odd numbers is : %d\n", iRet);
    
    free(p);

    return 0;

}