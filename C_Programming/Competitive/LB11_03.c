/* Write a program which accept range from user and return Addition of all numbers
in between that range. (Range should be positive numbers)
*/

#include<stdio.h>

int AdditionRangeDisplay(int iStart , int iEnd)
{
    int iCnt =0;
    int iSum =0;

    if(iStart < 0 || iEnd < 0)
{
    printf("Invaild Range");

    return -1;

}

    for(iCnt= iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{

    int iValue1 = 0, iValue2 = 0 ,iRet = 0;

    printf("Enter Starting point");
    scanf("%d",&iValue1);

    printf("Enter the End point");
    scanf("%d",&iValue2);

    iRet = AdditionRangeDisplay(iValue1, iValue2);
    printf("Addition is %d",iRet);

    return 0 ;
}