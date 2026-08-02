/*Write a Program Which Accept Number from user and print its numbers line.

Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4 


*/

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    int iCount1 = 0;
    int iCount2= 0;


    for(iCnt =-iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
