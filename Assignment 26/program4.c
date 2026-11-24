#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if ((ch >= 'a' && ch <= 'z') 
    || (ch >= 'A' && ch <= 'Z')
    || (ch >= '0' && ch <= '9'))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter The Charater : ");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("It is Special Character\n");
    }
    else
    {
        printf("It is Not Special Character\n");
    }

    return 0;
}