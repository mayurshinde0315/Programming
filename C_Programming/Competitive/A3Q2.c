// input : 24
//output :1 2 4 6 8 12
#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo ;
    }
    
    for(i=1; i<iNo; i++)
    {
        if(iNo % i==0)
    {
        printf("%d",i);
    }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}