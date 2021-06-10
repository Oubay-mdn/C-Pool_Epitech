/*
** EPITECH PROJECT, 2020
** my_print_comb2
** File description:
** Write a function that displays,all the different combinations of two-digit
*/

int show_comb2(int n1, int n2, int n3, int n4)
{
    my_putchar(n1 + 48);
    my_putchar(n2 + 48);
    my_putchar(' ');
    my_putchar(n3 + 48);
    my_putchar(n4 + 48);
    if (n1 == 9 && n2 == 8) {
    } else {
        my_putchar(',');
        my_putchar(' ');
    }
    return (0);
}

int cal_of_comb2(int n1, int n2, int n3, int n4)
{
    while (n4 <= 9 && n3 <= 9 && n2 <= 9 && n1 <= 9) {
        show_comb2(n1, n2, n3, n4);
        if (n2 >= 9 && n3 >= 9 && n4 >= 9) {
            n1++;
            n2 = -1;
        }
        if (n3 >= 9 && n4 >= 9) {
            n2++;
            n3 = n1;
            n4 = n2;
        }
        if (n4 >= 9) {
            n3++;
            n4 = 0;
        } else {
            n4++;
        }
    }
    return (0);
}

int my_print_comb2(void)
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 1;

    cal_of_comb2(n1, n2, n3, n4);
    return (0);
}
