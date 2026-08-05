/*Write a program to calculate Even factorial And Odd Factorial of a Given number.

Input : 5
Output : -7 (8 - 15)

Input : -5
Output : -7 (8 - 15)

Input : 10  
Output : 2895 (3840 - 945)

*/

#include<stdio.h>

int DiffFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int EveniFact = 1;
    int OddiFact1 = 1;
    int iDiff = 0;

    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            EveniFact = EveniFact * iCnt;
        }
        else 
        {
            OddiFact1= OddiFact1*iCnt;
        }
    }
    iDiff = EveniFact - OddiFact1;
    return iDiff;
}

int main()
{
    int iValue =0 ;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = DiffFactorial(iValue);
    printf("Even Factorial of Number is %d", iRet);

    return 0;

}