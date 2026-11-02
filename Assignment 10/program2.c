#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue = 0.0f, fValue2 = 0.0f;
    double dRet = 0;

    printf("Enter the width: ");
    scanf("%f", &fValue);

    printf("Enter the height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue, fValue2);

    printf("Area of Rectangle is %.4lf\n", dRet);

    return 0;
}