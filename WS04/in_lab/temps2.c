//==============================================
// Name:           Yiou(Anna) Wang
// Student Number: 151558194
// Email:          ywang811@myseneca.ca
// Section:        NGG
// Workshop:       4 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#define Max_day 10


// Put your code below:
#include <stdio.h>
int main(void)
{
	int i, NumDays;
	int Hight[Max_day], Low[Max_day];

	printf("---=== IPC Temperature Calculator V2.0 ===---");
	printf("\nPlease enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", & NumDays);
	while (NumDays < 3 || NumDays > 10)
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", & NumDays);
		printf("\n");

	}

	for (i = 0; i < NumDays; i++)
	{
		printf("Day %d - Hight: ", i + 1);
		scanf("%d", &Hight[i]);
		printf("Day %d - Low:  ", i + 1);
		scanf("%d", &Low[i]);
	}
	printf("\n%-5s%-3s%4s\n","Day", "Hi", "Low");
	for (i = 0; i < NumDays; i++)
	{
		
		printf("%-5d%-3d%4d\n", i + 1, Hight[i], Low[i]);
	}


	return 0;
	
		
}
