// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main()
{

    int n;
    int product = 1;
    int i, a;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    a = 2;

    for (i = 0; i < n; i++)
    {
        product = product * a;
        a = a + 2;
        printf("%d\n", (a-2));  
    }

    printf("The product of first %d odd numbers = %d", n, product);
    return 0;
}

