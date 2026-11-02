#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEFact = 1, iOFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iEFact *= iCnt;
        }
        else
        {
            iOFact *= iCnt;
        }
    }
    
    return iEFact - iOFact;
} 

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Differenceis %d\n", iRet);

    return 0;
}