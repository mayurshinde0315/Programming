/*Write a Program which accept number from user and the count of even digits

Input : 2395
Output : 1

Input : 1018
Output : 2

Input : 8462
Output : 4

*/

#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iCnt= iNo % 10;

        if(iCnt % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("Count of even digits is : %d\n", iRet);

    return 0;
}
    