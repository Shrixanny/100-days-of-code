// Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

#include<stdio.h>

int main() {

    float units, bill;

    printf("The number of units consumed: ");
    scanf("%f", &units);

    
    if ( units <= 100)
    {
        bill = 5 * units;
        printf(" Your fine is : %f", bill);
    }

    else if ( units > 100 && units <= 200)
    {
        bill = 5 * 100 + 9 * (units - 100);
        printf(" Your fine is : %f", bill);
    }

    else if ( units > 200 )
    {
        bill = 5 * 100 + 9 * 100 + 16 * (units - 200);
        printf(" Your fine is : %f", bill);
    }

    return 0;
}
