
#define _CRT_SECURE_NO_WARNINGS

// Paste your in-lab code below and upgrade it to the at-home specifications
#include <stdio.h>
int main(void)
{
	int Loonies, Quarters, Dimes, Nickels, Pennies, Left_cents;
	float paid_amount;

	printf("Please enter the amount to be paid: $");
	
	scanf("%f", &paid_amount);
	
	printf("GST:%.2lf\nBalance owing: $%1.2lf\n", paid_amount * .13 + .005, paid_amount * 1.13 + .005);
	
	Loonies = paid_amount * 1.13;
	
	printf("Loonies required: %d, balance owing $%.2lf\n", Loonies, (paid_amount * 1.13 - Loonies) + .005 );
	
	Quarters = (paid_amount * 1.13 - Loonies) * 100 / 25;

	printf("Quarters required: %d, balance owing $%.2lf\n",
		Quarters, (paid_amount * 1.13 - Loonies - Quarters * 0.25) + .005);

	Left_cents = (paid_amount * 1.13 - Loonies - Quarters * 0.25) * 100 + .5;

	Dimes =  Left_cents / 10;

	printf("Dimes required: %d, balance owing $%.2lf\n", 
		Dimes, paid_amount * 1.13 - Loonies - Quarters * 0.25 - Dimes * 0.1 + .005);

	Nickels = Left_cents % 10 / 5;

	printf("Nickels required: %d, balance owing $%.2lf\n", 
		Nickels, paid_amount * 1.13 - Loonies - Quarters * 0.25 - Dimes * 0.1 - Nickels * 0.05 + .005);

	Pennies = Left_cents % 10 % 5;

	printf("Pennies required: %d, balance owing $%.2lf\n", 
		Pennies, paid_amount * 1.13 - Loonies - Quarters * 0.25 - Dimes * 0.1 - Nickels * 0.05 - Pennies * 0.01 + .005);

	
	return 0;

}

// Dimes 10fen   Nickels 5fen   Pennies 1fen