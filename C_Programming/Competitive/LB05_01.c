/*Write a Program Which Accept Number from user and print that number of $ & * on screen.

Input : 5
Output : $ * $ * $ * $ * $ *

Iuput : 3
Output : $ * $ * $ *

Input : -3
Output :  $ * $ * $ *

*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf(" $ * ");
        
    }

}
int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
