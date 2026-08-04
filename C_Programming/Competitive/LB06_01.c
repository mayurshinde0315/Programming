/*Write a program which accept number from user and if number is 
less then 50 then print small, if it is greater then 50 and less 
then 100 then print medium, if it is greater then 100 then print large 

Input : 75
Output : Medium

*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo < 100)) 
    {
        printf("Medium\n");

    }
    else if(iNo >= 100)
    {
        printf  ("Larger\n");

    }
    
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number");
    scanf("%d",&iValue);

    Number(iValue);
    
    return 0;
}