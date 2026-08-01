/*Write a Program Which Accept Number from user and Return Difference Between Summation of all its Factors Non Factors.
Input : 12 
Output :  -34 (16 - 50)

Input : 10
Output : -29 (8 -37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{

int iCnt = 0;
int iSumF = 0;
int iSumNF = 0; 

for(iCnt = 1; iCnt < iNo; iCnt++)
{
    if(iNo % iCnt == 0)
    {
       iSumF = iSumF + iCnt;
    }
    else
    {
        iSumNF = iSumNF + iCnt;
    }
}

return (iSumF - iSumNF);

}

int main()

{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}