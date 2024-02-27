#include <stdlib.h>
#include "dog.h"

unsigned int _strlen(char *s)
{
    unsigned int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Add null terminator
    return dest;
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    unsigned int len1 = _strlen(name);
    unsigned int len2 = _strlen(owner);
    dog_t *dog;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    dog->name = malloc(sizeof(char) * (len1 + 1));
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }

    dog->owner = malloc(sizeof(char) * (len2 + 1));
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    _strcpy(dog->name, name);
    _strcpy(dog->owner, owner);
    dog->age = age;

    return (dog);
}
