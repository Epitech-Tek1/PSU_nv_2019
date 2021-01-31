/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_
#define ERROR 84
#define INP 10
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
#include <signal.h>
#include <fcntl.h>
#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <stdbool.h>
#include <pwd.h>
#include <grp.h>
#include "../classic_lib/my_printf/my_printf.h"
#include "get_next_line.h"
#define CRT(a, b, c, d, crt) ((a != '\0' && b != '\0' && a == b && c != crt && d != crt) ? (1) : (0))
#define LET(a) ((a > 'A' && a < 'Z') || (a > 'a' && a < 'z') ? (1) : (0))
#define PR(a) ((a == '.' && a + 1 == '/') ? (1) : (0))

int my_getnbr(char const *);
char *my_revstr(char *);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int const);
char *my_strcpy_crt(char *, char const *, char const);
void my_putchar(char);
void my_putstr(char const *);
int my_strlen(char const *);
int my_strlen_crt(char const *, char const);
int my_strleni(char const *);
void my_put_nbr(int);
int nbr_count(int);
int open_fl(char const *);
bool my_strcmp(const char *__restrict _s1, const char *__restrict _s2);
int read_return(int);
char *str_detect(char const *);
char **str_to_array(char const *, char const);
char **free_array(char **);
char *my_strcat(char const *, char const *);
char *my_strcat_crt(char const *, char const *, char const);
char **my_arraycpy(char **);
int my_strncmp(char const *s1, char const *s2, char const);
int count_nbr_line(char **);
void *cm(void *);
void *free_(void *);
char **str_to_array_n(char const *, char const, char const);
int nbr_ln(char const *, char const, int *);
char ***list_of_array(char *);
char ***free_list_array(char ***);
int is_num(char const *);
char *my_strncpy_alloc(char const *, int const);
void cf(int);
int **str_to_int_array(char const *, char const, char const *);
int nbr_ln(char const *, char const, int *);
int size_line(char const *, char const);
int create_new_line(char const *, int *, int *, char const);
void swapi(int *, int *);
void swapc(char *, char *);

#endif /*MY_H_*/
