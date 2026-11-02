#include<stdio.h>

double CircleArea(float fRadius)
{
    return 3.14 * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0;

    printf("Enter a number: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %.4lf\n", dRet);

    return 0;
}