#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks if string has digits.
 * @str: The Array string
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declare the variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*Counts string*/

	{
		if (!isdigit(str[count])) /*checks If string has digits*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Prints name program.
 * @argc: It counts arguments
 * @argv: The Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
