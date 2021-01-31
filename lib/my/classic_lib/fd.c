/*
** EPITECH PROJECT, 2019
** check_fct
** File description:
** check-fct
*/

#include "../include/my.h"

int open_fl(char const *str)
{
    int fd = 0;

    fd = open(str, O_RDONLY, S_IROTH);
    cf(fd);
    return (fd);
}

char *str_detect(char const *path)
{
    char *str = NULL;
    int fd = open_fl(path);
    int err = 0;
    struct stat info;

    cf(fstat(fd, &info));
    str = cm(malloc(sizeof (char) * info.st_size + 1));
    str[info.st_size] = '\0';
    cf(read(fd, str, info.st_size));
    cf(close(fd));
    return (str);
}
