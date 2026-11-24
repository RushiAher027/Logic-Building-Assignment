#include<stdio.h>

void DisplayASCII()
{
    int iCount = 0;

    printf("Decimal\t\tOctal\t\tHexadecimal\t\tSymbol\n");
    for(iCount = 0; iCount <= 255; iCount++)
    {
        printf("%d\t\t%X\t\t%o\t\t%c\n", iCount, iCount, iCount, iCount);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}