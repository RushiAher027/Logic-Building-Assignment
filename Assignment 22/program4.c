#include<stdio.h>

void Pattern(int iNo)
{
    printf("#\t");
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d\t", i);
        if(i != iNo)
        {
            printf("*\t#\t");
        }
    }
    printf("*\t");
}

int main()
{
    int  iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}