#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCount = 0;
    for(int i = 1; i <= iRow+1; i++)
    {
        for(int j = 1, iCount = 1; j <= iCol+1; j++, iCount++)
        {

            if (i == 1 || i == iRow+1 || j == 1 || j == iCol+1 || i == j)
            {
                printf("%d\t", iCount);
            }
            else
            {
                printf(" \t");
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