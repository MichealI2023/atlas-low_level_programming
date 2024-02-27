#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - ..
 * @d: ...
 */
typedef struct Dog {
    char *name;
    float age;
    char *owner;
} Dog;

void print_dog(Dog *d) {
    if (d == NULL) {
        printf("Name: (nil)\n");
        printf("Age: (nil)\n");
        printf("Owner: (nil)\n");
    } else {
        printf("Name: %s\n", d->name ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
    }
}

int main() {
    Dog my_dog = {NULL, 0.0, NULL};
    print_dog(&my_dog);

    return 0
}      
