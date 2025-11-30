// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main()
{

    int a, b, c, sum, number;

    printf("Enter a number:");
    scanf("%d", &number);

    a = number / 100;
    b = (number / 10) % 10;
    c = number % 10;

    sum = a * a * a + b * b * b + c * c * c;

    if (sum == number)
    {
        printf("%d is an armstrong number\n", number);
    }

    else 
    {

        printf("%d is not an armstrong number", number);
    }

return 0;
}
