/*
** EPITECH PROJECT, 2020
** client
** File description:
** client
*/

#include "../../include/src.h"

void client(sigact_t *act)
{
    int eof = 0;
    char *inp = NULL;
    size_t n = 0;

    while (_navy->nbb > 0 && eof != EOF) {
        disp_game();
        wait_attack(inp, &eof, act);
        attack(inp, &eof, &n);
    }
}
