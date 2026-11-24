#include<stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'Z')
        {
            printf("%c\t", ch);
            return;
        }
        while (ch != 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
        if (ch == 'Z')
        {
            printf("%c\t", ch);
            return;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a')
        {
            printf("%c\t", ch);
            return;
        }
       while (ch != 'a')
       {
            printf("%c\t", ch);
            ch--;
       }
       if (ch == 'a')
        {
            printf("%c\t", ch);
            return;
        }

    }
}

int main()
{
    char cValue = '\0';

    printf("Enter The Charater : ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}