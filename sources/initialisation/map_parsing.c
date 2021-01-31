/*
** EPITECH PROJECT, 2020
** map_parsing
** File description:
** map_parsing
*/

#include "../../include/src.h"

char loop_init(g_t *g, char **cd)
{
    for (int i = 0; i < g->nbb; ++i) {
        if ((CMP(cd[i][0], 49, 56) == 1) || (CMP(cd[i][2], 65, 72) == 1) ||
            (CMP(cd[i][3], 49, 56) == 1) || (CMP(cd[i][5], 65, 72) == 1) ||
            (CMP(cd[i][6], 49, 56) == 1) ||
            (cd[i][2] == cd[i][5] && cd[i][3] == cd[i][6])) return (1);
        g->cd[i] = cm(malloc(6));
        g->cd[i][0] = cd[i][0];
        g->cd[i][1] = (cd[i][2] - 64) * 2;
        g->cd[i][2] = cd[i][3] - 48;
        g->cd[i][3] = (cd[i][5] - 64) * 2;
        g->cd[i][4] = cd[i][6] - 48;
        g->cd[i][5] = '\0';
        if (g->cd[i][1] > g->cd[i][3]) swapc(&g->cd[i][1], &g->cd[i][3]);
        if (g->cd[i][2] > g->cd[i][4]) swapc(&g->cd[i][1], &g->cd[i][3]);
        my_putstr(cd[i]);
        my_putstr("\n");
    }
    return (0);
}

char **cd_init(g_t *g, char *str)
{
    char **cd = str_to_array(str, '\n');
    char err = 0;

    g->nbb = count_nbr_line(cd);
    g->cd = cm(malloc(sizeof (char *) * (g->nbb + 1)));
    err = loop_init(g, cd);
    g->cd[(int)g->nbb] = NULL;
    free_(str);
    free_array(cd);
    return ((err == 0) ? (my_arraycpy(g->cd)) : (NULL));
}

char place_boat(char ***map, char **cd, int y, int x)
{
    char ct = 0;

    for (; *cd; cd++) {
        if (((*cd)[1] == (*cd)[3]) && (*cd)[1] == x && y >= (*cd)[2] &&
            y <= (*cd)[4]) { ++ct;
            (*map)[y][x] = (*cd)[0];
        } else if ((x & 1) == 0 && ((*cd)[2] == (*cd)[4]) && (*cd)[2] == y &&
                   x >= (*cd)[1] && x <= (*cd)[3]) { ++ct;
            (*map)[y][x] = (*cd)[0];
        }
    }
    return (ct);
}

char filling(char ***map, int y, char **cd)
{
    char err = 0;

    for (int x = 2; x < 17; ++x) {
        (*map)[y][x] = (((x & 1) == 1) ? (' ') : ('.'));
        if (cd)
            err = place_boat(map, cd, y, x);
    }
    return (err);
}

char **map_parsing(g_t *g, char const *path)
{
    char **map = cm(malloc(sizeof (char *) * (9)));
    char **cd = ((path) ? (cd_init(g, str_detect(path))) : (NULL));
    char err = 0;

    g->pide = 0;
    if (path && !cd) return (NULL);
    for (int y = 0; y < 8 && err <= 1; ++y) {
        map[y] = cm(malloc(19));
        map[y][0] = y + 49;
        map[y][1] = '|';
        filling(&map, y, cd);
        map[y][17] = '\n';
        map[y][18] = '\0';
    } if (err <= 1)
          map[8] = NULL;
    free_array(cd);
    return ((err <= 1) ? (map) : (NULL));
}
