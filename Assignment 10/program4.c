#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * 5/9;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0;

    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %.4lf\n", dRet);

    return 0;
}