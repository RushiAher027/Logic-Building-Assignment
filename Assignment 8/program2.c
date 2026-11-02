#include<stdio.h>

void Display(int iNo)
{
    if (iNo == 0)
    {
        printf("Zero\n");
    }
    if (iNo == 1  || iNo == -1)
    {
        printf("One\n");
    }
    if (iNo == 2 || iNo == -2)
    {
        printf("Two\n");
    }
    if (iNo == 3 || iNo == -3)
    {
        printf("Three\n");
    }
    if (iNo == 4 || iNo == -4)
    {
        printf("Four\n");
    }
    if (iNo == 5 || iNo == -5)
    {
        printf("Five\n");
    }
    if (iNo == 6 || iNo == -6)
    {
        printf("Six\n");
    }
    if (iNo == 7 || iNo == -7)
    {
        printf("Seven\n");
    }
    if (iNo == 8 || iNo == -8)
    {
        printf("Eight\n");
    }
    if (iNo == 9 || iNo == -9)
    {
        printf("Nine\n");
    }

} 

int main()
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}