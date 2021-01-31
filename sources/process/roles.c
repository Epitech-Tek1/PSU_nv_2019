/*
** EPITECH PROJECT, 2020
** roles
** File description:
** roles
*/

#include "../../include/src.h"

void attack(char *inp, int *eof, size_t *n)
{
    my_putstr("attack:");
    *eof = getline(&inp, n, stdin);
    if (*eof != -1 && (my_strlen(inp) != 3 || CMP(*inp, 65, 72) == 1 ||
                       CMP(*(inp + 1), '1', '8') == 1)) {
        my_putstr("wrong positions\n");
        attack(inp, eof, n);
    } else if (*eof >= 0)
        for (char *i = inp; *i; i++)
            send_crt(*i);
}

void wait_attack(char *inp , int *eof, sigact_t *act)
{
    my_putstr("waiting for enemy's attack...");
    for (int i = 0; i < 1; ++i) {
        receive_crt(act);
        _navy->of++;
    }
    printf("%s\n", _navy->att);
}
