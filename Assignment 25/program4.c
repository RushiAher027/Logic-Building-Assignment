#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if (ch >= 'a' && ch <= 'z')
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

    if((cValue >= 'a' && cValue <= 'z')||(cValue >= 'A' && cValue <= 'Z'))
    {
        bRet = ChkSmall(cValue);
    }
    else
    {
        printf("Invalid Input\n");
        return 0;
    }

    if (bRet == TRUE)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is Not Small Case Character\n");
    }

    return 0;
}