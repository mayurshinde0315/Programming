/*Write a program which accept Range from user and display all Even number
in between that range. */

#include<stdio.h>

void EvenRangeDisplay(int iStart , int iEnd)
{
    int iCnt =0;
    for(iCnt =0, iCnt=iStart+1; iCnt< iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d", iCnt);
        }

    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    printf("Enter Starting point");
    scanf("%d",&iValue1);

    printf("Enter the End point");
    scanf("%d",&iValue2);

    EvenRangeDisplay(iValue1, iValue2);

    return 0 ;
}