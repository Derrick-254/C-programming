#include<stdio.h>
int main()
{
	float r,h,V;
	printf("Enter the Radius:");
	scanf("%f",&r);
	printf("Enter the height:");
	scanf("%f",&h);
	V=3.142*r*r*h;
	printf("Volume:%f",V);
	return 0;
	
}