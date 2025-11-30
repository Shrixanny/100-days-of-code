// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("This is not a prime number");
    }
    else if (number == 2 || number == 3)
    {
        printf("This is a prime number");
    }
    else
    {
        for (int i = 2 ; i*i<=number ; i++)
        {
            if (number%i == 0)
            {
                printf("this is not a prime number");
                break;
            }
            else
            {
                printf("This is a prime number");
                break;
            }
        }
    }
    return 0;
}