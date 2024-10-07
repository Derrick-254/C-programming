#include <stdio.h>
#define pi 3.142
/* a program to calculate the volume of a cylinder*/
int main()
{
	const float pi2=3.142;
	float vol,rad,hgt;
	printf("Enter the radius:");
	scanf("%f",&rad);
	printf("Enter the height:");
	scanf("%f",&hgt);
	vol=pi*rad*rad*hgt;
	printf("The Volume = %f",vol);
	return 0;
}