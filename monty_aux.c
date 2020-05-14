#include "monty.h"

/**
 * 
 * 
 */
int _isdigit(void)
{	
	int j;

	j = var.n[0] == '-' ? 1 : 0;
	while (var.n[j] != '\0')
	{
		if (var.n[j] < '0' || var.n[j] > '9')
		{
			return (1);
		}
		j++;
	}
	return (0);
}
