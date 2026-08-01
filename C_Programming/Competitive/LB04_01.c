/*Write a Program Which Accept Number from User and Display its Multiplication Of Factors.
Input : 12 
Output : 144

Iuput : 13
Output : 1(1)

Input : 10
Output : (1 * 2 * 5)
*/

#include<stdio.h>

int MultiFact(int iNo)
{

int iCnt = 0;
int iMulti = 1;

for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
{
    if(iNo % iCnt == 0)
    {
        iMulti = iMulti*iCnt;
    }
}
    return iMulti;

}

int main()

{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d\n",iRet);

    return 0;
}