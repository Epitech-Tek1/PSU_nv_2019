/*
** EPITECH PROJECT, 2020
** free_game
** File description:
** gree_game
*/

#include "../../include/src.h"

void free_all(g_t *g)
{
    free_array(g->p1);
    free_array(g->cd);
    free(g);
}
