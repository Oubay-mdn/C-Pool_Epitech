/*
** EPITECH PROJECT, 2020
** my_print_revalpha
** File description:
** the my_print_revalpha for the day03
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    int i = 122;

    while (i > 96){
        my_putchar(i);
        i --;
    }
    return (0);
}
