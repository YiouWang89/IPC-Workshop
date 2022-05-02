//==============================================
// Name:           Yiou(Anna) Wang
// Student Number: 151558194
// Email:          ywang811@myseneca.ca
// Section:        NGG
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#define NUM 4

#include <stdio.h>

// Put your code below:

int main(void)
{
	int i, j, high, low, highest = 0, lowest = 0;
	float low_sum = 0, high_sum = 0;
	int max_high[NUM] = { 0 }, min_low[NUM] = {0};
	
	printf("---===IPC Temperature Analyzer ===---\n");

	for (i = 1; i <= NUM; i++)
	{
		printf("Enter the high value for day %d:", i);
		scanf("%d", &high);
		max_high[i-1] = high;
		high_sum += max_high[i - 1];
		

		printf("Enter the low value for day %d:", i);
		scanf("%d", &low);
		min_low[i-1] = low;
		low_sum += min_low[i - 1];

		while (high < low || high > 40 || low < -41)
		{
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("Enter the high value for day %d:", i);
			scanf("%d", &high);
			high_sum -= max_high[i - 1];
			max_high[i - 1] = high;
			high_sum += max_high[i - 1];
			printf("Enter the low value for day %d:", i);
			scanf("%d", &low);
			low_sum -= min_low[i - 1];
			min_low[i - 1] = low;
			low_sum += min_low[i - 1];
		}
	}
	printf("The average (mean) LOW temperature was: %.2lf\n", low_sum / NUM);
	printf("The average (mean) HIGH temperature was: %.2lf\n", high_sum / NUM);
	printf("The average (mean) temperature was: %.2lf\n", (high_sum + low_sum)/ (NUM *2));

	for (i = 0; i < NUM; i++)
	{
		while (highest < max_high[i])
		{
			highest = max_high[i]; 
		}
			
	}
	
	for (j = 0; j < NUM; j++)
	{
		if (max_high[j]== highest)
			printf("The highest temperature was %d, on day %d\n", highest, j + 1); 
	}
	
	
	for (i = 0; i < NUM; i++)
	{
		while (lowest > min_low[i])
		{
			lowest = min_low[i]; 
		}
			
	}
	for (j = 0; j < NUM; j++)
	{
		if (min_low[j] == lowest)
			printf("The lowest temperature was %d, on day %d\n", lowest, j + 1);
	}
	
	return 0;
}


