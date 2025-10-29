/**Write a program to input two numbers and display their sum, difference, product, and quotient.**/
#include <stdio.h>
int main()
{
	float a,b = 0;
	printf("ENTER TWO VALUES: ");
	scanf("%f%f",&a,&b);
	printf("SUM: %f\n",a+b);
	printf("SUB: %f\n",a-b);
	printf("MUL: %f\n",a*b);
	printf("DIV: %f",a/b);
}
