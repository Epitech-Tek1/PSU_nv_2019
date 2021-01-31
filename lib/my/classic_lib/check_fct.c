/*
** EPITECH PROJECT, 2020
** check_malloc
** File description:
** check_malloc
*/

#include "../include/my.h"

void *cm(void *obj)
{
    if (obj == NULL) exit(84);
    return (obj);
}

void cf(int err)
{
    if (err == -1) exit(84);
}
