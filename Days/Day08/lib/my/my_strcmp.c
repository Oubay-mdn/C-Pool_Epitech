/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** 
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (s1 == 0 || s2 == 0)
        return (0);
    while (s1[i] == s2[i])
        i++;
    if (s1[i] == '\0' && s2[i] == '\0')
        return (0);
    else
        return (s1[i] - s2[i]);
}