/*
** EPITECH PROJECT, 2020
** skip_crt
** File description:
** skip_crt
*/

#include "../include/my.h"

int flag_cmp(char const crt, char const *fl)
{
    for (char const *i = fl; *i; i++)
        if (crt == *i)
            return (1);
    return (0);
}

int crt_count(char const *str, char const *fl, int end)
{
    char const *i = str + 1;

    str += flag_cmp(*str, fl);
    for (; (*i) && (i - str) < end; i++)
        if (flag_cmp(*i, fl) > 0 && flag_cmp(*(i - 1), fl) > 0)
            str++;
    return (i - str);
}

int find_end(char const *str, char const *fl)
{
    int end = my_strlen(str);
    char const *i = str + end - 1;

    for(; *i && flag_cmp(*i, fl) == 1; i--);
    return (end - ((str + end - 1) - i));
}

char *skip_str(char *str, char const *fl)
{
    int end = find_end(str, fl);
    char *new_str = cm(malloc(crt_count(str, fl, end) + 1));
    int i = 1;
    int ofst = flag_cmp(*str, fl) +  1;

    for (; str[i - 1] && i <= end; ++i) {
        new_str[i - ofst] = ((str[i - 1]  == '\t') ? (' ') : (str[i - 1]));
        if (flag_cmp(str[i], fl) == 1 && flag_cmp(str[i - 1], fl) == 1)
            ofst++;
    }
    new_str[i - ofst] = '\0';
    free(str);
    return (new_str);
}
