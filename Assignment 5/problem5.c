// 5- Identify Character Type
// Problem Statement: Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. Use character comparisons without using library character-classification functions.
// Expected Output:
// Input: A→ Uppercase Alphabet
// Input: m→ Lowercase Alphabet
// Input: 7 Digit
// Input: @ Special Character
#include <stdio.h>
#include <stdlib.h>
void CheckCharacterType(char cvalue)
{
    if (cvalue >= 'A' && cvalue <= 'Z')
    {
        printf("%c :- Uppercase Alphabet\n", cvalue);
    }
    else if (cvalue >= 'a' && cvalue <= 'z')
    {
        printf("%c :- Lowercase Alphabet\n", cvalue);
    }
    else if (cvalue >= '0' && cvalue <= '9')
    {
        printf("%c :- Digit\n", cvalue);
    }
    else
    {
        printf("%c :- Special Character\n", cvalue);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter a character: ");
    scanf("%c", &cValue);
    CheckCharacterType(cValue);
    return EXIT_SUCCESS;
}