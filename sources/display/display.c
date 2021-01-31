/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** display
*/

#include "../../include/src.h"

void help(void)
{
    my_putstr("USAGE\n      ./navy [first_player_pid] navy_positions\n" \
    "DESCRIPTION\n      first_player_pid:  only for the 2nd player. " \
    "pid of the first player.\n      navy_positions:  file representing" \
    " the positions of the ships.\n");
}