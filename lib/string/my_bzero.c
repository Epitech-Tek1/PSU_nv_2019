/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_bzero
*/

#include "include/string.h"

void
my_bzero(void *_s, size_t _l)
{
    unsigned char *_s2 = (unsigned char *)_s;

    while (--_l)
        *++_s2 = '\0';
}