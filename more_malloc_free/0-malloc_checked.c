#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked:
 * @b: .....
 * Return:....
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exist(98);

	return (p);
}
