#include<stdio.h>

double SquareMeter(int iNo)
{
    return iNo * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter Area in Square Feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meters is %lf\n", dRet);

    return 0;
}