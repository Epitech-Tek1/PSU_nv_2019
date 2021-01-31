/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** displays numbers
*/

#include "../include/my.h"
#include <unistd.h>

int count_nbr(int nb, int size)
{
    while (nb > 0) {
        nb /= 10;
        size *= 10;
    }
    return (size);
}

void my_put_nbr(int nb)
{
    int size = 1;

    (nb < 0) ? (my_putchar('-')) : (nb);
    (nb < 0) ? (nb *= -1) : (nb);
    size = count_nbr(nb, size);
    if (size != 1) {
        for (int i = size / 10; i > 0; i /= 10)
            my_putchar(((nb / i) % 10) + 48);
    } else
        my_putchar(nb + 48);
}
