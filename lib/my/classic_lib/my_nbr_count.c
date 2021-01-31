/*
** EPITECH PROJECT, 2019
** my_nbr_count
** File description:
** count nbr
*/

int nbr_count(int nbr)
{
    int count = 0;

    if (nbr == 0)
        return (1);
    while (nbr > 0) {
        ++count;
        nbr /= 10;
    }
    return (count);
}
