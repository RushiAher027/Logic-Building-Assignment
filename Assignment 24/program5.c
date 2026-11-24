#include<stdio.h>

int StrRevX(char *str)
{   
    int iStrLen = 0;
    char temp;
    while (str[iStrLen] != '\0')
    {
        iStrLen++;
    }

    for (int i = 0; i < iStrLen / 2; i++)
    {
        temp = str[i];
        str[i] = str[iStrLen - 1 - i];
        str[iStrLen - 1 - i] = temp;
    }
}

int main()
{
    char arr[20];
    
    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified String is : %s\n", arr);

    return 0;
}