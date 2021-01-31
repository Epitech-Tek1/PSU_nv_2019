/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** count string
*/

#include <stdio.h>

int end_nbr(char const *s)
{
    int count = 0;

    for (int i = 0; (s[i] >= '0' && s[i] <= '9') || s[i] == '-' && s[i]; ++i)
        ++count;
    return (count);
}

int my_getnbr(char const *str)
{
    int nbr = 0;
    int count = end_nbr(str);

    for (int i  = 0; i < count; ++i) {
        if  (str[i] != '-')
            nbr += str[i] - 48;
        if (str[i+1] != '\0' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
            nbr *= 10;
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return (-1);
    }
    if (str[0] == '-')
        nbr *= -1;
    return (nbr);
}
