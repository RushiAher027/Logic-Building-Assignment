#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter The Charater : ");
    scanf(" %c", &cValue);

    bRet = ChkCapital(cValue);

    if (bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is Not Capital Character\n");
    }

    return 0;
}