/*
** EPITECH PROJECT, 2020
** is_thing
** File description:
** is_thing
*/

int is_num(char const *str)
{
    for (; *str; str++)
        if (*str < '0' || *str > '9')
            return (1);
    return (0);
}
