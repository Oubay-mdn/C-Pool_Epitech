/*
** EPITECH PROJECT, 2020
** my_print_comb
** File description:
** Write a function that displays three different digits numbers
*/

#include <unistd.h>

int print_nb(int d1, int d2, int d3)
{
    while (d2 <= 9) {
        d3 = d2 + 1;
        while (d3 <= 9) {
            my_putchar(d1 + 48);
            my_putchar(d2 + 48);
            my_putchar(d3 + 48);
            if (d1 == 7 && d2 == 8 && d3 == 9) {
            } else {
                my_putchar(',');
                my_putchar(' ');
            }
            d3 = d3 + 1;
        }
        d2 = d2 + 1;
    }
    return (0);
}

int my_print_comb(void)
{
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;

    while (d1 <= 9) {
        d2 = d1 + 1;
        print_nb(d1, d2, d3);
        d1 = d1 + 1;
    }
    return (0);
}
