/*
** EPITECH PROJECT, 2020
** error_handling
** File description:
** error_handling
*/

#include "../../include/src.h"

bool error_handling(int _ac, char const **_av)
{
    if (_ac < 2 || _ac > 3) return (false);
    if (_ac == 2 && !my_strcmp(_av[1], "pos1")) return (false);
    if (_ac == 3 && !my_strcmp(_av[2], "pos2")) return (false);
    if (_ac == 3 && !is_num(_av[2])) return (false);
    return (true);
}
