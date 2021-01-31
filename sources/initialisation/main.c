/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../../include/src.h"
#include "../../include/string.h"

void print_map(char **map)
{
    my_putstr(" |A B C D E F G H\n");
    my_putstr("-+---------------\n");
    for (; *map; map++)
        my_putstr(*map);
    my_putchar('\n');
}

void disp_game()
{
    my_putstr("my positions:\n");
    print_map(_navy->p1);
    my_putstr("enemies's positions:\n");
    print_map(_navy->p1e);
}

int main(int ac, char const *av[])
{
    _navy = malloc(sizeof (g_t));
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        help();
        return (EXIT_SUCCESS);
    }
    if (!error_handling(ac, av) || !initialisation(_navy, ac, av)) return (84);
    if (!process(_navy));
    return (EXIT_SUCCESS);
}

