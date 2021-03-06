#include "monty.h"

/**
 * _isdigit - Entry point
 * Return: Always 0 (Success)
 */
int _isdigit(void)
{
	int j;

	if (!(var.n))
	{
		return (1);
	}
	j = var.n[0] == '-' ? 1 : 0;
	while (var.n[j] != 0)
	{
		if (var.n[j] < '0' || var.n[j] > '9')
		{
			return (1);
		}
		j++;
	}
	return (0);
}
