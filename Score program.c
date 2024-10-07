#include <stdio.h>
int main()
{
	int score;
	printf("Enter the score 1-5:");
	scanf("%d", &score);
	if (score < 2)
		printf("Poor");
	else if (score < 3)
		printf("Below Avg");
			   else if (score<4)
			   printf("Average");
	else if (score < 5)
		printf("Good");
			   else
			   printf("Excellent");
			   return 0;
		   }
