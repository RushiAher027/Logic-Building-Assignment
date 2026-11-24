#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iTempCount = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iTempCount = iCount;
        }
        iCount++;
        str++;
    }
    if (*str == '\0' && iTempCount == 0)
    {
        return -1;
    }
    else
    {
        return iTempCount;
    }
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);
    
    printf("Enter The Character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character Location is : %d\n", iRet);

    return 0;
}