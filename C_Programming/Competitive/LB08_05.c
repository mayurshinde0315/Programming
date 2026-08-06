/* Write a program which accept temperature in Square feet and convert it into
Square meter ( 1 Square feet = 0.0929 square meter) 

Input : 5
Output : 0.464515

Input : 7
Output : 0.650321

*/
#include<stdio.h>

double SquareMeter(int iNo)
{
    {
        double Area = 0.0;

        Area = iNo * 0.0929;

        return Area;

    }
  
}
int main()

{
    int iValue = 0;
    double dRet = 0;

    printf("Enter Area in Square Feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    
    printf("Square Meter is :%6f\n",dRet);

    return 0;
}