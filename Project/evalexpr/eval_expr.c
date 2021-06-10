/*
** EPITECH PROJECT, 2020
** evalxpr
** File description:
** evalexpr
*/

int my_getnbr(char const *str);

int my_strtol(char *str, char **end_ptr)
{
    int i = 0;

    if ((str[i] < '0' || str[i] > '9'))
        i++;
    while (str[i] >= '0' && str[i] <= '9')
        i++;
    (*end_ptr) = str + i;
    return (0);
}

int my_strtoll(char const *str, int *end_ptr)
{
    int x = my_getnbr(str);

    if (str[0] == '(')
        ((*end_ptr)++);
    if (str[0] == '-' && str[1] == '(') {
        ((*end_ptr)++);
        ((*end_ptr)++);
    }
    for (; str[*end_ptr] >= '0' && str[*end_ptr] <= '9'; (*end_ptr)++);
    return (x);
}
