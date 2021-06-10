/*
** EPITECH PROJECT, 2020
** assignement_1.c
** File description:
** rush 1-1 cpool
*/

#include <unistd.h>

void my_putchar(char c);

void display_top_line(int x)
{
    x = x - 1;
    my_putchar('o');
    while (x > 0) {
        if (x == 1)
            my_putchar('o');
        else
            my_putchar('-');
        x = x - 1;
    }
    my_putchar('\n');
}

void display_the_middle_line(int x)
{
    my_putchar('|');
    x = x - 1;
    while (x > 0) {
        if (x == 1)
            my_putchar('|');
        else
            my_putchar(' ');
        x = x - 1;
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    display_top_line(x);
    y = y - 1;
    while (y > 0) {
        if (y == 1)
            display_top_line(x);
        else
            display_the_middle_line(x);
        y = y - 1;
    }
}