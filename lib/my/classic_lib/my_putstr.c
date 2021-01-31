/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays a string
*/

#include <unistd.h>
#include "../include/my.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

void print_ch(char const *str, int channel)
{
    write(channel, str, my_strlen(str));
}
