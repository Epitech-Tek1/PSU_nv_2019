/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** count string
*/

int my_strlen(char const *str)
{
    char const *i = str;

    if (!str) return (0);
    for (; *(i); i++);
    return (i - str);
}

int my_strlen_crt(char const *str, char const end)
{
    char const *i = str;

    if (!str) return (0);
    for (; *(i + 1) && (*i) != end; i++);
    return (i - str);
}

int my_strleni(char const *str)
{
    int i = 0;

    if (!str) return (0);
    while ((str[i++]));
    return (i);
}

int count_nbr_line(char **array)
{
    char **i = array;

    if (!array) return (0);
    for (; (*i); i++);
    return (i - array);
}
