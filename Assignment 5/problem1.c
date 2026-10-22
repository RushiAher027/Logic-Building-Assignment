// 1- Find the Greatest of Three Numbers
// Problem Statement: Accept three integers and determine the greatest number among them. The program must also work correctly when two or all three numbers are equal.
// Expected Output:
// Input: 10 50 30 50 is Greatest
// Input: 40 40 2040 is Greatest
// Input: 15 15 15 15 is Greatest
#include <stdio.h>
#include <stdlib.h>
void FindGreatest(int iFirst, int iSecond, int iThird)
{
    int iGreatest = iFirst;
    
    if (iSecond > iGreatest)
    {
        iGreatest = iSecond;
    }
    if (iThird > iGreatest)
    {
        iGreatest = iThird;
    }
    printf("%d is Greatest\n", iGreatest);
}
int main()
{
int iValuel = 0, iValue2 = 0, iValue3 = 0;
printf("Enter three numbers: ");
scanf("%d %d %d", &iValuel, &iValue2, &iValue3);
FindGreatest(iValuel, iValue2, iValue3);
return EXIT_SUCCESS;
}