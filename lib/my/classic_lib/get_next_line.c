/*
** EPITECH PROJECT, 2020
** get_next_line
** File description:
** get_next_line
*/

#include "../include/my.h"

static char *my_realloc(char *str, int add)
{
    int count = 0;
    int i = 0;
    char *new_str = NULL;

    while (str[count++]);
    new_str = cm(malloc(count + add + 1));
    for (; str[i]; ++i)
        new_str[i] = str[i];
    new_str[i] = '\0';
    free(str);
    return (new_str);
}

static int check_end(char *buff, int *prev, int *offset, int size)
{
    int i = *prev;

    for (; buff[i]; ++i)
        if (buff[i] == '\n') {
            *prev = i + 1;
            *offset = i;
            return (1);
        }
    *prev = 0;
    if (i < READ_SIZE)
        return (3);
    return (0);
}

static char *filling_in(char *buff, char *res, int offset, int size)
{
    int i = 0;

    for (; buff[i] != '\n' && buff[i]; ++i)
        res[offset + i] = buff[i];
    res[offset + i] = '\0';
    res = my_realloc(res, size);
    return (res);
}

char *get_l(int const fd)
{
    static char buff[READ_SIZE + 1];
    static int prev = 0;
    static int end = 0;
    static int size = READ_SIZE;
    int offset = 0;
    char *res = cm(malloc(READ_SIZE + 1));

    if (end == 3 || READ_SIZE <= 0 || fd == -1 || res == NULL)
        return (NULL);
    size = ((prev == 0) ? (read(fd, buff, READ_SIZE)) : (READ_SIZE));
    res = filling_in(buff + prev, res, 0, size);
    end = check_end(buff, &prev, &offset, size);
    while (size == READ_SIZE && end == 0 && res != NULL) {
        size = read(fd, buff, READ_SIZE);
        if (size < READ_SIZE)
            buff[size] = '\0';
        res = filling_in(buff, res, offset, size);
        end = check_end(buff, &prev, &offset, size);
    }
    res[offset] = '\0';
    return (res);
}
