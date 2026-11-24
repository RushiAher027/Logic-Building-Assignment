#include<stdio.h>

void Reverse(char *str)
{
    int iCount = 0, iCnt = 0;
    char temp = '\0';
    char *start = str;

    while (*str != '\0')
    {
        iCount++;
        str++;
    }

    for (iCnt = 0; iCnt < iCount / 2; iCnt++)
    {
        temp = start[iCnt];

        start[iCnt] = start[iCount - iCnt - 1];
        start[iCount - iCnt - 1] = temp;
    }

    str = start;

    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
}

int main()
{
    char arr[20];
    int iCnt = 0, iRet = 0;

    printf("Enter The String : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}