/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** basics
*/

#include "../../include/src.h"

bool initialisation(g_t *_navy, int _ac, char const * const *_av)
{
    _navy->p1 = map_parsing(_navy, _av[_ac - 1]);
    _navy->av = _av;
    _navy->ac = _ac;
    _navy->p1e = map_parsing(_navy, NULL);
    _navy->sign = 0;
    _navy->pid = getpid();
    return (true);
}
