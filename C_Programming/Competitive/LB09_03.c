/*Write a Program which accept number from user and return the count of odd digits
in between 3 and 7

Input : 2395
Output : 1

Input : 1018
Output : 2
Input : 8462
Output : 0

*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iCnt= iNo % 10;

        if((iCnt > 3 ) && (iCnt < 7))
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

    iRet = CountOdd(iValue);

    printf("Count of Odd digits is : %d\n", iRet);

    return 0;
}
    