/*
** EPITECH PROJECT, 2020
** server
** File description:
** server
*/

#include "../../include/src.h"

static void sig_user(int sig)
{
    signal(sig, SIG_IGN);
    _navy->sign = 1;
    printf("enemy connected\n\n");
    signal(sig, SIG_IGN);
}

void get_epid(sigact_t *act)
{
    sigemptyset(&act->sa_mask);
    act->sa_handler = &sig_user;
    sigaction(SIGUSR2, act, NULL);
    pause();
    receive_int(act);
}

void server(sigact_t *act)
{
    int eof = 0;
    char *inp = NULL;
    size_t n = 0;

    get_epid(act);
    while (_navy->nbb > 0 && eof != EOF) {
        disp_game();
        attack(inp, &eof, &n);
        wait_attack(inp, &eof, act);
    }
}
