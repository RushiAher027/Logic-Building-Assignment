#include<stdio.h>

void DisplaySchedule(char chDiv)
{   
    if(chDiv == 'A')
    {
        printf("Your Exam at 7.00AM");
    }
    else if(chDiv == 'B' )
    {
        printf("Your Exam at 8.30AM");
    }
    else if(chDiv == 'C' )
    {
        printf("Your Exam at 9.20AM");
    }
    else if(chDiv == 'D' )
    {
        printf("Your Exam at 10.30AM");
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Your Division : ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}