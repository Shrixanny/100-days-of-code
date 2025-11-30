// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main()
{
    int celcius;

    printf("Enter the temperature in Celsius: ");
    scanf("%d", &celcius);

    float fahrenheit = (celcius * 9.0 / 5.0) + 32;

    printf("fahrenheit of 5 celcius is %f", fahrenheit);
    return 0;
}