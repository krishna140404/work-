/*
* FILE : m1.cpp
* PROJECT : Major Assignment 1
* PROGRAMMER : krishna kachhiapatel
* FIRST VERSION : 2024-02-02
* DESCRIPTION : Write a program that displays characters and their averaged values.
*/
#include<stdio.h>
#include<stdbool.h>
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
/* FUNCTION: PowerCalCulation
* DESCRIPTION : in this function the loop is used in order to raise base into the power .
*              in simple words , This function represent the total calculation of power .
* PARAMETERS : base , expo : in order to enter the values
*
* RETURN : TOTAL : this varieable describes the final calulation.
*/
int PowerCalculation(int base, int expo)
{
	int i = 0, total = 1;
	for (i = 0; i < expo; i++)
	{
		total = total * base;

	}
	return total;
}
/* FUNCTION: NumberRangeChecker
* DESCRIPTION  : this function is used for checking the range of base and expo .
*               which make sure that the base is not greater than 30 or less than 1
				as awell as exponent is greater than 6 or less than 1
*
* PARAMETERS :low : this is  to check the  lowest value of base and exponent
*             high : it is for verifying the highest value of base and exponent
*            tvalue : it is the value of base or exponent which is entered by user.
*
* RETURN : 1: is the value of inside the range.
*          0: is the value is not in range. 
*/
int NumberRangeChecker(int low, int tValue, int high)
{
	bool verifiedValue = 0;
	if (low <= tValue && tValue <= high)
		
	{
		verifiedValue = 1;
	}
	else
	{
		verifiedValue = 0;
	}
	return verifiedValue;
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