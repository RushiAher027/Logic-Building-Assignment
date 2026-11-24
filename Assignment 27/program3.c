#include<stdio.h>

int Difference(char *str)
{
    int iSCnt = 0, iCCnt = 0, iDiff = 0;
    while (*str != '\0')
    {
        if ((*str >= 'A' && *str <= 'Z'))
        {
            iSCnt++;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            iCCnt++;
        }
        str++;
    }
    iDiff = iSCnt - iCCnt;
    if (iDiff < 0)
    {
        iDiff = -iDiff;
    }
    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter The String : ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}