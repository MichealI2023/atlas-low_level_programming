#include <stdlib.h>
#include "dog.h"

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

void free_dog(dog_t *d);

int main() {
    // Example usage of free_dog function
    dog_t *my_dog = malloc(sizeof(dog_t));
    if (my_dog == NULL) {
        // Handle memory allocation failure
        return 1;
    }

    // Initialize the dog structure
    my_dog->name = "Buddy";
    my_dog->age = 3.5;
    my_dog->owner = "John";

    // Free the memory allocated for the dog structure
    free_dog(my_dog);

    return 0;
}

void free_dog(dog_t *d) {
    // Free memory for name and owner strings
    free(d->name);
    free(d->owner);

    // Free memory for the dog structure itself
    free(d);
}
