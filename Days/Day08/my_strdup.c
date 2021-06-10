/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** 
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i =0;
    char *dest = malloc(my_strlen(src));

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
