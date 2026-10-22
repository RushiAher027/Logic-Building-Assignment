// 3- Find the Greater of Two Numbers
// Problem Statement: Accept two integers and determine which number is greater. If both numbers are equal, display an appropriate message.
// Expected Output:
// Input: 10 2020 is Greater
// Input: 50 30-50 is Greater
// Input: 15 15→ Both Numbers Are Equal
#include <stdio.h>
#include <stdlib.h>
void FindGreater (int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if (iFirst < iSecond)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

int main()
{
int iValuel = 0;
int iValue2 = 0;
printf("Enter two numbers: ");
scanf("%d %d", &iValuel, &iValue2);
FindGreater (iValuel, iValue2);
}
return EXIT_SUCCESS;