/* write a program which accept width and height of Rectangle from user and calculate its Area
 Area Of Rectangle = width * Heigh 
 */
#include <stdio.h>

double Area(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = Area(fValue1, fValue2);

    printf("Area of rectangle is : %lf\n", dRet);

    return 0;
}