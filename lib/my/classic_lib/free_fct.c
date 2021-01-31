/*
** EPITECH PROJECT, 2020
** free_fct
** File description:
** free_fct
*/

#include <stdlib.h>

void *free_(void *obj)
{
    if (obj != NULL)
        free(obj);
    return (NULL);
}

char **free_array(char **array)
{
    if (array != NULL) {
        for (int i = 0; array[i]; ++i)
            free_(array[i]);
        free_(array);
    }
    return (NULL);
}
