/*
** EPITECH PROJECT, 2020
** connection
** File description:
** connection
*/

#include "../../include/src.h"

static void connection(g_t *_navy)
{
    sigact_t act;

    my_printf(1, "my_pid:  %d\n", _navy->pid);
    if (_navy->ac == 2) {
        my_putstr("waiting for enemy connection...\n\n");
        /* signal(SIGUSR2, sig_user); */
        /* pause(); */
        /* receive_int(&act); */
        server(&act);
    } else if (_navy->ac == 3) {
        _navy->pide = atoi(_navy->av[1]);
        kill(_navy->pide, SIGUSR2);
        my_putstr("successfully connected\n\n");
        send_crt(_navy->pid);
        client(&act);
    }
}

bool process(g_t *_navy)
{
    connection(_navy);
    return (0);
}
