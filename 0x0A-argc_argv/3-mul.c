#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: int
 * @argv: array
 * Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	int prod;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	prod = arg1 * arg2;
	printf("%i\n", prod);
	return (0);
}
