/* Write a program which accept temperature in Fahrenheit and
Covert celsius =(Fahreheit - 32)*(5/9)) 

Input : 10
Output : -12.2222 (10 -32)*(5/9)

Input : 34 
Output : 1.11111 (34 - 32 )*(5/9)

*/
#include<stdio.h>

double FhotCs(float fTemp)
{
    double dCelsius =0.0;
    dCelsius = (fTemp -32) * (5.0 / 9.0);
    return dCelsius;
  
}
int main()

{
    float fValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter tempreature in fahrenheit :");
    scanf("%f",&fValue1);

    dRet = FhotCs(fValue1);
    printf("Celsius value is :%f\n",dRet);

    return 0;
}