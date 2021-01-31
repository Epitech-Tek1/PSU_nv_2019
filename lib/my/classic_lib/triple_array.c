/*
** EPITECH PROJECT, 2020
** array_of_array
** File description:
** array_of_array
*/

#include "../include/my.h"

char ***free_list_array(char ***array)
{
    if (array != NULL) {
        for (int i = 0; array[i]; ++i)
            free_array(array[i]);
        free(array);
    }
    return (NULL);
}

char ***list_of_array(char *str)
{
    int ct = 0;
    char ***list = cm(malloc(sizeof (char **) * (nbr_ln(str, ';', &ct) + 1)));

    for (int i = 0; i < ct; ++i) {
        list[i] = str_to_array_n(str, ' ', ';');
        str +=  my_strlen_crt(str, ';') + 2;
        for (; i < ct - 1 && *str && (*str == ' ' || *str == ';'); str++);
    }
    list[ct] = NULL;
    return (list);
}
