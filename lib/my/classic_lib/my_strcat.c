/*
** EPITECH PROJECT, 2020
** my_str_cat
** File description:
** my_str_cat
*/

#include "../include/my.h"

char *my_strcat(char const *s1, char const *s2)
{
    char *new_str = cm(malloc(my_strlen(s1) + my_strlen(s2) + 1));
    int i = 0;
    int x = 0;

    for (; s1[i]; ++i)
        new_str[i] = s1[i];
    for (; s2[x]; ++x)
        new_str[i + x] = s2[x];
    new_str[i + x] = '\0';
    return (new_str);
}

char *my_strcat_crt(char const *s1, char const *s2, char const crt)
{
    char *new_str = cm(malloc(my_strlen(s1) + my_strlen(s2) + 2));
    int i = 0;
    int x = 0;

    for (; s1[i]; ++i)
        new_str[i] = s1[i];
    new_str[i] = crt;
    for (; s2[x]; ++x)
        new_str[i + x + 1] = s2[x];
    new_str[i + x + 1] = '\0';
    return (new_str);
}
