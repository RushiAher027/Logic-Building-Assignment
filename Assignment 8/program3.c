#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    
    return iFact;
} 

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is: %d\n", iValue, iRet);

    return 0;
}