// 4- Check Triangle Validity
// Problem Statement: Accept three integer values representing the lengths of the sides of a triangle. Determine whether they can form a valid triangle. All sides must be positive, and the sum of any two sides must be greater than the third side.
// Expected Output:
// Input: 3 4 5→ Valid Triangle
// Input: 1 2 3→ Invalid Triangle
// Input: 0 4 5→ Invalid Triangle
#include <stdio.h>
#include <stdlib.h>
void CheckTriangle (int iSidel, int iSide2, int iSide3)
{
    
    if (iSidel <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid Triangle\n");
        return;
    }

    if (iSidel + iSide2 > iSide3 && iSidel + iSide3 > iSide2 && iSide2 + iSide3 > iSidel)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSidel = 0, iSide2 = 0, iSide3 = 0;
   
    printf("Enter three sides: ");
    scanf("%d %d %d", &iSidel, &iSide2, &iSide3);
    
    CheckTriangle (iSidel, iSide2, iSide3);
    
    return EXIT_SUCCESS;
}