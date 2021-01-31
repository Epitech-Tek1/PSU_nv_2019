/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copy a string into an other
*/

#include "../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (src[0] == '\0' || !src || !dest) return (NULL);
    for (; src[i]; ++i)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *my_strncpy(char *dest, char const *src, int const n)
{
    int i = 0;

    if (*src == '\0' || !src || !dest) return (NULL);
    while (*src)
        *dest++ = *src++;
    return (dest);
}

char *my_strcpy_crt(char *dest, char const *src, char const n)
{
    int i = 0;

    if (src[0] == '\0' || !src || !dest) return (NULL);
    for (; src[i] && src[i] != n; ++i)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char **my_arraycpy(char **array)
{
    int nbr_line = count_nbr_line(array);
    char **new_array = cm(malloc(sizeof (char *) * (count_nbr_line(array) + 1)));

    if (new_array == NULL) return (NULL);
    for (int y = 0; array[y]; ++y) {
        new_array[y] = cm(malloc(my_strlen(array[y]) + 1));
        new_array[y] = my_strcpy(new_array[y], array[y]);
    }
    new_array[nbr_line] = NULL;
    return (new_array);
}

char *my_strncpy_alloc(char const *src, int const n)
{
    int size = ((n == 0 && src) ? (my_strlen(src)) : (n));
    char *res = cm(malloc(size + 1));

    if (src[0] == '\0' || src == NULL) return (NULL);
    return (my_strncpy(res, src, size));
}
