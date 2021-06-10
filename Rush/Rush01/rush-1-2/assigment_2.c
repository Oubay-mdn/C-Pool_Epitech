/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-rush1-oubay.moudden
** File description:
** assigment_2.c
*/

int the_top_line(int x, int y)
{
    if (y != 1 && x != 1)
        my_putchar('/');
    else
        my_putchar('*');
    while (x > 2) {
        my_putchar('*');
        x--;
    }
    if (x != 1) {
        if (y != 1)
            my_putchar('\\');
        else
            my_putchar('*');
    }
    my_putchar('\n');
}

int the_bottom_line(int x, int y)
{
    if (x != 1)
        my_putchar('\\');
    else
        my_putchar('*');
    while (x > 2) {
        my_putchar('*');
        x--;
    }
    if (x != 1) {
        my_putchar('/');
    }
    my_putchar('\n');
}

int the_middle_line(int x, int y)
{
    my_putchar('*');
    while (x > 2) {
        my_putchar(' ');
        x--;
    }
    if (x != 1) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (y == 0 || y < 0 || y > 2147483647) {
        write (2,"Invalid size\n",13);
        return;
    }
    if (x == 0 || x < 0 || x > 2147483647) {
        write (2,"Invalid size\n",13);
        return;
    }
    the_top_line(x, y);
    while (y > 2) {
        the_middle_line(x, y);
        y--;
    }
    if (y != 1)
        the_bottom_line(x, y);
}