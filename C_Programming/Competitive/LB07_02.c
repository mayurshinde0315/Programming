/* Accept Amount in US doller and its Return its Corresponding 
value in Indian currency consider 1$ as 70 rupees.

Input : 10
Output : 700

Input : 3
Output : 210

Input : 1200  
Output : 84000

*/

#include<stdio.h>

int DollerToINR(int iNo)
{
    int iResult = 0; 

    iResult = iNo * 70;

    return iResult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("value in INR is %d",iRet);

    return 0;
}
