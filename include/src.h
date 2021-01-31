/*
** EPITECH PROJECT, 2020
** src
** File description:
** src
*/

#ifndef _SRC_
#define _SRC_
#include "../lib/my/include/my.h"
#include "game.h"
#define CMP(nb, min, max) ((nb >= min && nb <= max) ? (0) : (1))
#define MAX_INT (2147483647)
typedef struct sigaction sigact_t;

g_t *_navy;

char **map_parsing(g_t *, char const *);
bool error_handling(int, char const **)
            __nonnull((2));

#ifdef __OPTIMIZE__
static __always_inline
void help(void)
{
    my_putstr("USAGE\n     ./navy [first_player_pid] navy_positions\n" \
    " DESCRIPTION\n     first_player_pid:  only for the 2nd player. " \
    "pid of the first player.\n     navy_positions:  file representing" \
    " the positions of the ships.");
}
#else
void help(void);
#endif

bool process(g_t *);
void free_all(g_t *);
bool initialisation(g_t *, int, char const * const *);
void server(sigact_t *);
void client(sigact_t *);
void send_crt(char const);
void send_int(int const);
void receive_int(sigact_t *);
void receive_crt(sigact_t *);
void send_pid(int);
void print_map(char **);
void disp_game(void);
void attack(char *, int *, size_t *);
void wait_attack(char *, int *, sigact_t *);
void attack_reception(int, siginfo_t *, void *);

#endif /*_SRC_*/
