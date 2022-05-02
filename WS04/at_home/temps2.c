//==============================================
// Name:           Yiou(Anna) Wang
// Student Number: 151558194
// Email:          ywang811@myseneca.ca
// Section:        NGG
// Workshop:       4 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#define Max_day 10

// Place your code below
#include <stdio.h>
int main(void)
{
	int i, j, NumDays, highest=0, lowest=0;
	int Hight[Max_day], Low[Max_day];
	double aver_temp, sum_temp=0;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &NumDays);
	while (NumDays < 3 || NumDays > 10)
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &NumDays);

	}

	for (i = 0; i < NumDays; i++)
	{
		printf("Day %d - Hight: ", i + 1);
		scanf("%d", &Hight[i]);
		printf("Day %d - Low:  ", i + 1);
		scanf("%d", &Low[i]);
	}
	printf("\n%-5s%-3s%4s\n", "Day", "Hi", "Low");

	for (i = 0; i < NumDays; i++)
	{
		printf("%-5d%-3d%4d\n", i + 1, Hight[i], Low[i]);
	}

	for (i = 0; i < NumDays; i++)
	{
		while (highest < Hight[i])
		{
			highest = Hight[i];
		}
	}
	for (i = 0; i < NumDays; i++)
	{
		if (Hight[i] == highest)
			printf("\nThe highest temperature was %d, on day %d", highest, i + 1);
	}
	

	for (i = 0; i < NumDays; i++)
	{	
		while (lowest > Low[i])
		{
			lowest = Low[i];
			lowest_day = i;
		}
	}
	for (i = 0; i < NumDays; i++)
	{
		if (Low[i] == lowest)
			printf("\nThe lowest temperature was %d, on day %d\n", lowest, i + 1);
	}
	
	do
	{
		printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", NumDays);
	scanf("%d", &j);
	

		while (j == 0 || j > NumDays)
		{
			printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ", NumDays);
			scanf("%d", &j);
		}
		if (j < 0)
			printf("\nGoodbye!\n");
		sum_temp = 0;
		for (i = 0; i < j; i++)
		{
			sum_temp += Hight[i] + Low[i];
		}
		aver_temp = sum_temp / (2 * j);
		printf("\nThe average temperature up to day %d is: %.2lf\n", j, aver_temp);

	} while (j > 0);

	return 0;


}
