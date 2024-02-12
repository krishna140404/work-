
#include <stdio.h>
int GetNum();
int PowerCalculation(int, int);
int NumberRangeChecker(int, int, int);
int main()
{
	int i = 0;
	int userInput = 0;
	int j = 1;
	int expo = 1;
	int base = 1;
	while (i < j)
	{
		printf("Menu: \n");
		printf("1. Change base\n");
		printf("2. Change exponent\n");
		printf("3. Display base raised to exponent\n");
		printf("4. Exit program\n");
		printf("Option? ");
		userInput = GetNum();
		if (userInput == 1)
		{
			printf("Enter new base: ");
			base = GetNum();
			int baseRange = NumberRangeChecker(1, base, 30);
			if (baseRange == 1)
			{

			}
			else
			{
				base = 1;
				printf("invalid base\n");

			}
		}
		if (userInput == 2)
		{
			printf("Enter new exponent: ");
			expo = GetNum();
			int expoRange = NumberRangeChecker(1, expo, 6);

			if (expoRange == 1)
			{

			}
			else
			{
				expo = 1;
				printf("invalid expo\n");

			}
		}
		if (userInput == 3)
		{
			int result = PowerCalculation(base, expo);
			printf("%d raised to the power of %d is %d\n", base, expo, result);


		}
		if (userInput == 4)
		{
			break;
		}
		if (userInput < 1 || userInput > 4)
		{
			printf("Invalid entry\n");
		}
		i++;
		j++;
	}
}

int PowerCalculation(int base, int expo)
{
	int i = 0, total = 1;
	for (i = 0; i < expo; i++)
	{
		total = total * base;

	}
	return total;
}

int NumberRangeChecker(int low, int tValue, int high)
{

	if (low <= tValue && tValue <= high)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

#pragma warning(disable: 4996)
int GetNum(void)
{
	/* we will see in a later lecture how we can improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: indent and brace this function consistent with
	your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}