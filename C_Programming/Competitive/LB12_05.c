/* Write a program which accept number from user and count frequency of such a
digits which are less than 6.
*/
#include<stdio.h>
int CountTwo(int iNo)
{
    int iDigit = 0;
    int iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit <= 6)
        {
            iFreq++;
        }

        iNo = iNo /10;
    }
    return iFreq;

}
int main()

{
    int iValue = 0, iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
     
    printf("%d",iRet);

    return 0;
}