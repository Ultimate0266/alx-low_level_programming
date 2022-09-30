#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};
e
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
e
	num = atoi(argv[1]);
	result = 0;
e
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
e
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
e
			num -= coins[j];
		}
	}
e
	printf("%d\n", result);
	return (0);
}
