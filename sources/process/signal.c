/*
** EPITECH PROJECT, 2020
** signal
** File description:
** signal
*/

#include "../../include/src.h"

void send_pid(int num)
{
    signal(num, SIG_IGN);
    if (num == SIGUSR2)
        _navy->pide |= _navy->ofst;
}

void attack_reception(int num, siginfo_t *info, void *unused)
{
    signal(num, SIG_IGN);
    if (num == SIGUSR2)
        *(_navy->att + _navy->of) |= _navy->ofst;
}
