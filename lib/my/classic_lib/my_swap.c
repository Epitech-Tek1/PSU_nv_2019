/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swap two integers
*/

void swapi(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}

void swapc(char *a, char *b)
{
    char c = *a;

    *a = *b;
    *b = c;
}
