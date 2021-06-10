/*
** EPITECH PROJECT, 2019
** task3.c
** File description:
** step 2
*/

#include "my.h"

int error(int argc, char **argv)
{
    int x = 2;

    if (argc < 3)
        return (84);
    while (x < argc) {
        if ((argv[x][0] > 'Z' && argv[x][0] < 'a') || argv[x][0] > 'z' ||
        argv[x][0] < 'A') {
            return (84);
        }
        if (argv[x][1] != '\0') {
            return (84);
        }
        x++;
    }
    return (0);
}

int nb_aplha(int argc, char **argv)
{
    int nb = 0;
    int x = 0;
    int argprint = argv[argc][0];

    my_strlowcase(argv[argc]);
    my_strlowcase(argv[1]);

    while (argv[1][x] != '\0') {
        if (argv[1][x] == argv[argc][0]) {
            nb++;
        }
        x++;
    }
    if (argc > 2)
        nb_aplha(argc - 1, argv);
    my_putchar(argprint);
    my_putchar(':');
    my_put_nbr(nb);
    probability(argv[1], nb);
    my_putchar('\n');
    return (0);
}

void probability(char *arg, int nbr)
{
    int div_len = 0;

    for (int i = 0; arg[i] != '\0'; i++)
        if (arg[i] >= 'a' && arg[i] <= 'z')
            div_len++;
    if (div_len != 0) {
        my_putstr(" (");
        my_put_nbr((nbr * 100) / div_len);
        my_putchar('.');
        my_put_nbr(((nbr * 10000 / div_len) % 100 / 10));
        my_put_nbr(((nbr * 10000 / div_len) % 10));
        my_putstr("%)");
    } else
        my_putstr(" (0.00%)");
}

int main(int argc, char **argv)
{
    if (error(argc, argv) == 84)
        return (84);
    return (nb_aplha(argc - 1, argv));
}
