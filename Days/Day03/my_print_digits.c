/*
** EPITECH PROJECT, 2020
** my_print_digits
** File description:
** the task03 of the day03, it's a print of digits
*/

#include <unistd.h>

int my_print_digits(void)
{
    int i = 48;

    while (i < 58) {
        my_putchar(i);
        i ++;
    }
}
