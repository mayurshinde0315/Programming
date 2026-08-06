/* Write a program which  accept width and height of rectangle from user and calculate its area.(Area = Width * Heigth)

input : 5.3 9.58
Output : 51.834

*/
#include<stdio.h>

double RectArea(float fwidth, float fHeigth)
    {
        return  fwidth * fHeigth;
    }

int main()
{

    float fWidth = 0.0f;
    float fHeigth = 0.0f;
    double dRet = 0.00;

    printf("Enter width");
    scanf("%f",&fWidth);

    printf("Enter Heigth");
    scanf("%f",&fHeigth);

    dRet = RectArea(fWidth
,fHeigth);

    printf("Area Of Rectangle =  %.2f\n",dRet);

    return 0;
}