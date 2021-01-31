/*
** EPITECH PROJECT, 2020
** octal_convert
** File description:
** octal_convert
*/

#include "../include/my.h"

int octal_convert(int nbr)
{
    int new_nbr = 0;
    int offset = 1;

    for (; nbr > 0; nbr /= 8) {
        new_nbr += nbr % 8 * offset;
        offset *= 10;
    }
    return (new_nbr);
}
