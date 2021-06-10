/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

char *my_evil_str(char *str)
{
    char temp;
    int a = 0;
    int b = my_strlen(str) - 1;

    while (a < b) {
        temp = str[a];
        str[a] = str[b];
        str[b] = temp;
        a++;
        b--;
    }
    return (str);
}
