/* Write a program which accept range from user and display all numbers in
in between that range in Reverse order.
*/

#include<stdio.h>

int RevRangeDisplay(int iStart , int iEnd)
{

    int iCnt =0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalid Number\n");
        return -1;
    }

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return +1;
    }

    for(iCnt = iEnd; iCnt>= iStart; iCnt--)
    {
      printf("%d",iCnt);
    }

    return iSum;
}


int main()
{

    int iValue1 = 0, iValue2 = 0, iRet = 0;
    printf("Enter Starting point");
    scanf("%d",&iValue1);

    printf("Enter the End point");
    scanf("%d",&iValue2);

    iRet =RevRangeDisplay(iValue1, iValue2);
    printf("Reverse Addition number Range :%d",iRet);

    return 0 ;
}