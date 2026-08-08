/* Write a program which aacept area in square feet and convert it
meter.(1 Square feet = 0.0929 square meter)

Input : 5
output : 0.464615

Input : 7
Output : 0.650321 
*/
#include<stdio.h>

double SquareMeter(int iValue)
{
    return iValue *0.0929;
}

int main()

{
    int iValue = 0;
    double dRet =0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Area in Square feet in Meter: %4lf\n",dRet);
    return 0;
}