/* Write a program which accept distance in kilometer and
Covert it into meter.(1 kilometre = 1000 Meter ) 

Input : 5
Output : 5000

Input : 12 
Output : 12000

*/
#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;   
}
int main()

{
    int iValue = 0, iRet = 0;

    printf("Enter Distance");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance Kilomter to meter %d\n",iRet);

    return 0;
}