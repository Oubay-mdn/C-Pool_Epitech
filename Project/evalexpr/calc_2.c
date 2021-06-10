/*
** EPITECH PROJECT, 2020
** calc_2.c
** File description:
** second part of calc file
*/
int soustraction(char *str);
int addition(char *str);
int multiplication(char *str);
int mod(char *str);
int division(char *str);
void my_putchar(char c);
int my_put_nbr(int nb);

int define(char *av, int sign)
{
    if (sign == 45)
        return (soustraction(av));
    if (sign == 43)
        return (addition(av));
    if (sign == 42)
        return (multiplication(av));
    if (sign == 37)
        return (mod(av));
    if (sign == 47)
        return (division(av));
}

int eval_expr(char *av)
{
    int i = 0;
    int sign = 0;
    while (av[i] != '\0') {
        if (av[i] > 36 && av[i] < 48) {
            sign = av[i];
        }
        i++;
    }
    return (define(av, sign));
}

int main(int ac , char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}