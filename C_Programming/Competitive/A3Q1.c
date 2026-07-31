// input : 7
//output :2 4 6 8 10 12 14
#include<stdio.h>

void PrintEven(int iNo)
{
    int i =1;
    if(iNo <=0)
    {
        return ;
    }
    
    while(i<=iNo)
    {
        printf("%d\t",i*2);
        i++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}
