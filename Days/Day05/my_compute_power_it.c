/*
** EPITECH PROJECT, 2020
** my_compute_power_it.c
** File description:
** puissance 
*/

int my_compute_power_it(int nb, int p)
{
    int puis = 1;
    int i;
    if (p<0) {
        return (0);
    }
    else if (p==0) {
        return (1);
    }
    else {
        for (i=0;i<p;i++) {
            puis = puis * nb;
        }
    } return (puis);
}
