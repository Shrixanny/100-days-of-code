/**Write a program to calculate the area and perimeter of a rectangle given its length and breadth**/
#include <stdio.h>
int main()
{
	float l,b;
	printf("Enter the length and breadth: ");
	scanf("%f%f",&l,&b);
	printf("Area: %f\n", l*b);
	printf("Perimeter: %f\n", 2*(l+b));
}
