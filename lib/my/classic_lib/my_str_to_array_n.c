/*
** EPITECH PROJECT, 2020
** my_str_to_array
** File description:
** my_str_to_array
*/

#include "../include/my.h"

int nbr_ln_n(char const *str, char const sptr, int *count, char const end)
{
    for (; *str && *str != end; str++)
        if (*str != sptr && (*(str + 1) == '\0' || *(str + 1) == end
                             || *(str + 1) == sptr))
            ++*count;
    return (*count);
}

int size_line_n(char const *str, char const sptr, char const end)
{
    char const *i = str;

    for (; *i != sptr && *i && *i != end; i++);
    return (i - str);
}

int create_new_line_n(char const *str, int *x, char const end, char const sptr)
{
    char const *i = str;

    *x = 0;
    for (; (*i) && (*i) == sptr && *i != end; i++);
    return (i - str - 1);
}

char **str_to_array_n(char const *s, char const c, char const end)
{
    int ct = 0;
    char **arr = cm(malloc(sizeof (char *) * (nbr_ln_n(s, c, &ct, end) + 1)));
    int y = 0;
    int x = 0;

    arr[0] = cm(malloc(size_line_n(s, c, end) + 1));
    for (int i = 0; s[i] && s[i] != end && y < ct; ++i) {
        if (s[i] == c) {
            arr[y][x] = '\0';
            arr[y + 1] = cm(malloc(size_line_n(s + i + 1, c, end) + 1));
            i += create_new_line_n(s + i, &x, end, c);
            ++y;
        } else if (y < ct) {
            arr[y][x] = s[i];
            ++x;
        }
    }
    arr[y][x] = '\0';
    arr[ct] = NULL;
    return (arr);
}
