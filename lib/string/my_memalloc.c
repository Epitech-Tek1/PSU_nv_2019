/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_memalloc
*/

#include "include/string.h"
#include <stdlib.h>

void *my_memalloc(const size_t size)
{
    void *memory = malloc(size + 1);

    if (memory) {
        my_bzero(memory, size);
        return (memory);
    }
    return (NULL);
}
