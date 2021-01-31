/*
** EPITECH PROJECT, 2020
** my_str_to_int_array
** File description:
** my_str_to_int_array
*/

#include "../include/my.h"

int **str_to_int_array(char const *str, char const sptr, char const *crt)
{
    int ct = 0;
    int **array = cm(malloc(sizeof (int *) * (nbr_ln(str, sptr, &ct) + 1)));
    int y = 0;
    int x = 0;

    printf("-------start------- %d\n", ct);
    array[0] = cm(malloc(sizeof (int) * (size_line(str, sptr))));
    for (int i = 0; str[i] && y < ct; ++i)
        if (str[i] == sptr) {
            array[y + 1] = cm(malloc(sizeof (int) * (size_line(str + i + 1, sptr))));
            i += create_new_line(str + i, &x, &y, sptr);
        } else if (y < ct) {
            array[y][x] = my_strlen_crt(crt, str[i]);
            ++x;
        }
    return (array);
}
