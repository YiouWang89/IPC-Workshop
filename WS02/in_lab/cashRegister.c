
#define _CRT_SECURE_NO_WARNINGS


// Start your code below:
#include <stdio.h>
int main(void)
{
int Loonies, Quarters;
float paid_amount;

printf("Please enter the amount to be paid: $");
scanf("%f", &paid_amount);
Loonies = paid_amount;
Quarters = (paid_amount - Loonies) / 0.25;
printf("Loonies required: %d, balance owing $%.2f\n", Loonies, paid_amount - Loonies);
printf("Quarters required: %d, balance owing $%.2f\n", 
	Quarters,paid_amount - Loonies - Quarters * 0.25);

return 0;

}