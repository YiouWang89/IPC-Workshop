//==============================================
// Name:           Yiou(Anna) Wang
// Student Number: 151558194
// Email:          ywang811@myseneca.ca
// Section:        NGG
// Workshop:       5 (at-home)
//==============================================


// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 4

struct Employee
{
	int id, age;
	double salary;
};
int main(void)
{
	int i = 0, j, option = 0, empid, posi = -1;

	struct Employee emp[SIZE] = { {0} };

	printf("---=== EMPLOYEE DATA ===---\n\n");

	do
	{
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
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
				if (emp[i].id > 0)
				printf(" %5d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
			}
			printf("\n");
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
			if (posi < 0)
			{
				if (i < SIZE)
				{
					printf("Enter Employee ID: ");
					scanf("%d", &emp[i].id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[i].age);
					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[i].salary);
					printf("\n");
				}
				else
				{
					printf("ERROR!!! Maximum Number of Employees Reached\n");
				}
				i++;
			}
			else
			{
				for (i = 0; i < SIZE; i++)
				{
					posi = -1;
					if (emp[i].id == 0)
					{
						posi = i;
						i = SIZE + 1;
					}
				}
					printf("Enter Employee ID: ");
					scanf("%d", &emp[posi].id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[posi].age);
					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[posi].salary);
					printf("\n");
					if (posi < 0)
						printf("ERROR!!! Maximum Number of Employees Reached\n");
				

				printf("\n");
			}

			break;

		case 3:
			printf("Update Employee Salary\n");
			printf("===============\n");
			
			
			do
			{
				posi = -1;
				printf("Enter Employee ID: ");
				scanf("%d", &empid);
				for (j = 0; j < SIZE; j++)
				{
					if (emp[j].id == empid)
					{
						posi = j;
						j = SIZE + 1;
					}
				}
				if (posi >= 0)
				{
					printf("The current salary is %.2lf\n", emp[posi].salary);
					printf("Enter Employee New Salary: ");
					scanf("%lf", &emp[posi].salary);
				}
				else
				{
					printf("*** Error, didnt fint id***\n");
				}
			} while (posi < 0);

			break;

		case 4:
			
			printf("Remove Employee\n");
			printf("===============\n");		
			do
			{
				posi = -1;
				printf("Enter Employee ID: ");
				scanf("%d", &empid);
				for (j = 0; j < SIZE; j++)
				{
					if (emp[j].id == empid)
					{
						posi = j;
						j = SIZE + 1;	
					}
				}
				if (posi >= 0)
				{
					printf("Employee %d will be removed\n", emp[posi].id);
					emp[posi].id = 0;	
				}
				else
				{
					printf("*** Error, didnt fint id***\n");
				}

				
				
			} while (posi < 0);

			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	return 0;
}

