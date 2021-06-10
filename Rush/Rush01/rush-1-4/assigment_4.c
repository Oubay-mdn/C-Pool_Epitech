/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-rush1-oubay.moudden
** File description:
** assigment_4.c
*/

int display_the_top_line(int x, int y)
{
    if (y != 1 && x != 1)
        my_putchar('A');
    else
        my_putchar('B');
    while (x > 2) {
        my_putchar('B');
        x--;
    }
    if (x != 1) {
        if (y != 1)
            my_putchar('C');
        else
            my_putchar('B');
    }
    my_putchar('\n');
}

int display_the_middle_line(int x, int y)
{
    my_putchar('B');
    while (x > 2) {
        my_putchar(' ');
        x--;
    }
    if (x != 1) {
        my_putchar('B');
    }
    my_putchar('\n');
}

int display_the_bottom_line(int x, int y)
{
    if (x != 1)
        my_putchar('A');
    else
        my_putchar('B');
    while (x > 2) {
        my_putchar('B');
        x--;
    }
    if (x != 1) {
        my_putchar('C');
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
    display_the_top_line(x, y);
    while (y > 2) {
        display_the_middle_line(x, y);
        y--;
    }
    if (y != 1)
        display_the_bottom_line(x, y);
}
