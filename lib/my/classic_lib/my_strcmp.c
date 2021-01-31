/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compare two strings
*/

#include "../include/my.h"

bool my_strcmp(const char *restrict s1, const char *restrict s2)
{
    int i = 0;

    if (s1 == NULL || s2 == NULL)
        return (-1);
    for (; s1[i] == s2[i] && s1[i] && s2[i]; ++i);
    if (s1[i] < s2[i])
        return (-1);
    else if (s1[i] > s2[i])
        return (1);
    printf("%s, %s\n", s1 + i, s2 + i);
    return (0);
}

int my_strncmp(char const *s1, char const *s2, char const crt)
{
    int i = 0;

    if (s1 == NULL || s2 == NULL)
        return (-1);
    for (; CRT(s1[i], s2[i], s1[i + 1], s2[i + 1], crt) == 1; ++i);
    if (s1[i] < s2[i])
        return (-1);
    else if (s1[i] > s2[i])
        return (1);
    return (0);
}
