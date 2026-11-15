#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCount = 1;
    for(int i = iRow; i >= 1; i--)
    {
        for(int j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCount++);
            if (iCount == 10)
            {
                iCount = 1;
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