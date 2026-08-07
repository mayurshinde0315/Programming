/*Write a Program which accept number from user and return different between summation of even digits and summation of odd digits 

Input : 2395
Output : -15 (2 - 17)

Input : 1018
Output : 6 (8 - 2)

Input : 8462
Output : 16 (16 - 0)

Input : 5733
Output : -18 (0 - 18)

*/

#include<stdio.h>

int CountEvenodd(int iNo)
{
    int iDigits = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while(iNo != 0)
    {
        if(iNo < 0)
        {
            iNo = - iNo;
        }

        iDigits= iNo % 10;

        if(iDigits % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigits;
        }
        else
        {
            iOddSum = iOddSum + iDigits;
        }

        iNo = iNo / 10;
    }

       return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountEvenodd(iValue);

    printf("Count of Odd digits is : %d\n", iRet);

    return 0;
}
    