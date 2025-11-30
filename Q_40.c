// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include<stdio.h>
int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int remainder;

    while (number>0)
    {
        remainder=number%10;
        number=number/10;

        if (remainder == 1)
        {
            
        }
    }
}