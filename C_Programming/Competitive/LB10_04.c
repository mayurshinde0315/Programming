/* write a program which accept tempreature in faherenheit and convert it also 
celsius.(1 celsius = (Fahrenhelt - 32)*(5/9))

Input : 10
Output : -12.2222
*/

#include <stdio.h>

    float FhtoCS(float fTemp)
{ 
    float ctemp = 0.0f;

    ctemp = (fTemp -32) * (5.0 / 9.0);

    return ctemp;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCS(fValue);

    printf(" tempreature in fahernheit covert in celsius : %4lf\n", dRet);

    return 0;
}