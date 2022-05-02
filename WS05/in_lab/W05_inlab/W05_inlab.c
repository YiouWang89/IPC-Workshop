//==============================================
// Name:           Yiouu(Anna) Wang	
// Student Number: 151558194
// Email:          ywang811@myseneca.ca
// Section:        NGG
// Workshop:       5 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 2// Define Number of Employees "SIZE" to be 2

struct Employee
{
	int id, age;
	double salary;
};
int main(void)
{
	int i = 0, option = 0;

	struct Employee emp[SIZE] = { {0} };

	printf("---=== EMPLOYEE DATA ===---\n");

	do
	{
		printf("\n1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n");
		printf("\nPlease select from the above options: ");

		scanf("%d", &option);
		printf("\n");

		switch (option)
		{
		case 0:	
			printf("Exiting Employee Data Program. Good Bye!!!\n");

			break;

		case 1: 
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			for (i = 0; i < SIZE; i++)
			{
				printf(" %6d%7d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
			}

			i = 0;
			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;

		case 2:	

			printf("Adding Employee\n");
			printf("===============\n");
			
			if (i < SIZE )
			{ 
			printf("Enter Employee ID: ");
			scanf("%d", & emp[i].id);
			printf("Enter Employee Age: ");
			scanf("%d", & emp[i].age);
			printf("Enter Employee Salary: ");
			scanf("%lf", & emp[i].salary);
			}
			else 
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}

			printf("\n");
			i++;
			
			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	return 0;
}

