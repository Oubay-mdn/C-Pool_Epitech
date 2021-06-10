/*
** EPITECH PROJECT, 2020
** my_compute_factorial_it.c
** File description:
** my_compute_factorial_it.c
*/

int my_compute_factorial_it(int nb)
{
    int nbr = 1;

    if (nb < 0 || nb > 12) {
        nbr = 0;
    } else {
        while (nb > 0) {
            nbr = nbr * nb;
            nb--;
        }
    }
    return (nbr);
}
