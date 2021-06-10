/*
** EPITECH PROJECT, 2020
** B-CPE-100-LYN-1-1-cpoolday07-oubay.moudden
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src , int nb)
{
    int i = 0;
    int j = my_strlen(dest);

    while (src[i] != '\0' && i < nb) {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}