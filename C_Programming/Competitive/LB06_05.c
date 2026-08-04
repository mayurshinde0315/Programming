/* Write a program which Accept number from user and display its table in Reverse.

Input : 2
Output :  20 18 16 14 12 10 8 6 4 2

Input : 5
Output : 50 45 40 35 30 25 20 15 10 5

Input : -5
Output : 50 45 40 35 30 25 20 15 10 5
*/

#include<stdio.h>


void Table(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMulti =iNo*iCnt;
        printf("%d",iMulti);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}