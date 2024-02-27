#include <stdio.h>
#include <stdlib.h>
#include "dog.h"



/*
 *
 */

void print_dog(struct dog *d);
{
	if (d == NULL)
                return;
        
	if (d->name == NULL)
            d->name = "(nil/n)";
        if (d->owner == NULL)
            d->name = "(nil/n)";

      printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner)
}
