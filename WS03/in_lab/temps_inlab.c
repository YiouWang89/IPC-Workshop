
#define _CRT_SECURE_NO_WARNINGS

#define NUM 3

#include <stdio.h>

// Put your code below:

int main(void)
{
	int i, high, low;
	printf("---===IPC Temperature Analyzer ===---\n");

	for (i = 1; i <= NUM; i++)
	{
		printf("Enter the high value for day %d:", i);
		scanf("%d", &high);
		printf("Enter the low value forn day %d:", i);
		scanf("%d", &low);
		while (high < low || high > 40 || low < -41)
		{
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("Enter the high value for day %d:", i);
			scanf("%d", &high);
			printf("Enter the low value forn day %d:", i);
			scanf("%d", &low);
		}
	}
	return 0;
}


