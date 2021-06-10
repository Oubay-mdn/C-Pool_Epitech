/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** my_getnbr
*/

#include <stdlib.h>

static int my_getnbr2(char const *str, int i, int *neg)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] >= '0' && str[x] <= '9') {
            i *= 10;
            i += str[x] - 48;
        }
        if (str[x] == '-' && (str[x + 1] >= '0' && str[x + 1] <= '9'))
            *neg = 1;
        if ((str[x] < '0' || str[x] > '9') &&
            (str[x - 1] >= '0' && str[x - 1] <= '9'))
            return (i);
        i++;
    }
    return (i);
}

int my_getnbr(char const *str)
{
    int a = 0;
    int neg = 0;

    if (str == NULL)
        return (84);
    a = my_getnbr2(str, a, &neg);
    return (a);
}