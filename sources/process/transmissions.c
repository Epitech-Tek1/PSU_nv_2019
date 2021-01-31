/*
** EPITECH PROJECT, 2020
** tranmisissions
** File description:
** transmissions
*/

#include "../../include/src.h"

void send_int(int const nbr)
{
    short int sig[2] = {SIGUSR1, SIGUSR2};

    kill(_navy->pide, sig[nbr & 1]);
    usleep(150000);
    for (int i = 0; i < 32; ++i) {
        kill(_navy->pide, sig[(nbr >> i) & 1]);
        usleep(150000);
    }
}

void receive_int(sigact_t *act)
{
    short int sig[2] = {SIGUSR1, SIGUSR2};

    sigemptyset(&act->sa_mask);
    act->sa_flags = SA_SIGINFO;
    act->sa_sigaction = &attack_reception;
    _navy->ofst = 1;
    for (int x = 0; x < 31; ++x) {
        sigemptyset(&act->sa_mask);
        for (int i = 0; i < 2; ++i)
            sigaction(*(sig + i), act, NULL);
        _navy->ofst *= 2;
    }
}

void send_crt(char const crt)
{
    short int sig[2] = {SIGUSR1, SIGUSR2};

    kill(_navy->pide, sig[crt & 1]);
    usleep(150000);
    for (int i = 0; i < 7; ++i) {
        kill(_navy->pide, sig[(crt >> i) & 1]);
        usleep(150000);
    }
}

void receive_crt(sigact_t *act)
{
    short int sig[2] = {SIGUSR1, SIGUSR2};

    sigemptyset(&act->sa_mask);
    /* act->sa_handler = &send_pid; */
    act->sa_flags = SA_SIGINFO;
    act->sa_sigaction = &attack_reception;
    _navy->ofst = 1;
    for (int x = 0; x < 8; ++x) {
        sigemptyset(&act->sa_mask);
        for (int i = 0; i < 2; ++i)
            sigaction(*(sig + i), act, NULL);
        pause();
        _navy->ofst *= 2;
    }
}
