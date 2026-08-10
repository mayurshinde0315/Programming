/* Write a program which accept range from user and return Addition of all Even numbers
in between that range. (Range should be positive numbers)
*/

#include<stdio.h>

int EvenRangeDisplay(int iStart , int iEnd)
{

    int iCnt =0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0)
{
    printf(" Invaild Range\n");

    return -1;

}

    for(iCnt = iStart; iCnt<= iEnd; iCnt++)
    {
      if(iCnt % 2 == 0)
        {
        iSum = iSum + iCnt;
        }
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

    iRet =EvenRangeDisplay(iValue1, iValue2);
    printf("Even Addition number Range :%d",iRet);

    return 0 ;
}