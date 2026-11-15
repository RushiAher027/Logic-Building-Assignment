#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch1 = '\0';
    char ch2 = '\0';
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++, ch2++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t", ch1);
            }
            else
            {
                printf("%c\t", ch2);
            }
        }
        printf("\n");
    }
}

int main()
{
    int  iValue1 = 0, iValue2 = 0;

    printf("Enter number of row and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}