/*
** EPITECH PROJECT, 2020
** my_compute_factorial_rec.c
** File description:
** factoriel
*/

int my_compute_factorial_rec(int nb)
{
    if ((nb < 0) || (nb >=13)) {
        return (0);
    } else if (nb < 2) {
        return (1);
    } else {
        return (nb * my_compute_factorial_rec(nb-1));
    }
}
