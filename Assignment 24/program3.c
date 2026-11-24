#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        iCount++;
        str++;
    }
    if (*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCount;
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

    iRet = FirstChar(arr, cValue);

    printf("Character Location is : %d\n", iRet);

    return 0;
}