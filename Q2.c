// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{

    int a, b, sum, difference, product, quotient;

    printf("Value of a: ");
    scanf("%d", &a);

    printf("Value of b: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of %d and %d is: %d\n", a, b, sum);

    difference = a - b;

    printf("difference of %d and %d is: %d\n", a, b, difference);

    product = a * b;

    printf("product of %d and %d is: %d\n", a, b, product);


    if (b !=0)
{
    quotient = a / b;
    
    printf("quotient of %d and %d is: %d\n", a, b, quotient);
}
    else if (b == 0)

    printf("this is not divisible");
    

    return 0;
}







