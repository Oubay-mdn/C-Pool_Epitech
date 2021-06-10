/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-cpoolday07-oubay.moudden
** File description:
** my_print_params
*/

int my_print_params(int ac, char **av)
{
    for (int i = 0; ac != i; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return (0);
}

int main(int ac, char **av)
{
    my_print_params(ac, av);
    return (0);
}