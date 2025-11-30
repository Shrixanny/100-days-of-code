// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main()
{
    char date[11];
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    printf("%02d-", day);

    switch (month)
    {
    case 1:
        printf("Jan-");
        break;
    case 2:
        printf("Feb-");
        break;
    case 3:
        printf("Mar-");
        break;
    case 4:
        printf("Apr-");
        break;
    case 5:
        printf("May-");
        break;
    case 6:
        printf("Jun-");
        break;
    case 7:
        printf("Jul-");
        break;
    case 8:
        printf("Aug-");
        break;
    case 9:
        printf("Sep-");
        break;
    case 10:
        printf("Oct-");
        break;
    case 11:
        printf("Nov-");
        break;
    case 12:
        printf("Dec-");
        break;
    default:
        printf("Invalid-");
        break;
    }

    printf("%d", year);
    return 0;
}
