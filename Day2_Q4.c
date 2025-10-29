/**Write a program to calculate the area and circumference of a circle given its radius**/
#include <stdio.h>
int main()
{
	float r;
	printf("Enter the radius:");
	scanf("%f",&r);
	printf("Area:%f\n",3.14*r*r);
	printf("Circumference:%f",2*3.14*r);
}
