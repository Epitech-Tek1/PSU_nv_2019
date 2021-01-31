/*
** EPITECH PROJECT, 2020
** library
** File description:
** my_memcpy
*/

#include "include/string.h"

void *my_memcpy(void *restrict _dest, const void *restrict _src, size_t _l)
{
    char *c_dest = _dest;
    const char *csrc = _src;

    while (_l--)
        *c_dest++ = *csrc++;
    return (_dest);
}
