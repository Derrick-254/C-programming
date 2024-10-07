#include <stdio.h>
int main()
{
	int age;
	printf("Enter the Age:");
	scanf("%d", &age);
	if (age < 18)
	{
		printf("Not an Adult");
	}
	else
    {
		printf("Adult");
	}
	return 0;
}
