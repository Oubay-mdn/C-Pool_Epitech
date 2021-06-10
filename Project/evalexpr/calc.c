/*
** EPITECH PROJECT, 2020
** calc.c
** File description:
** evalexpr
*/

int soustraction(char *str)
{
    int n2 = 0;
    int n1 = 0;
    int answer = 0;
    int x = 0;

    for (;str[x] > '9' || str[x] < '0'; x++){}
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n1 = n1 * 10 + (str[x] - 48);
    if (str[x] == '-')
        x = x + 1;
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n2 = n2 * 10 + (str[x] - 48);
    answer = n1 - n2;
    return (answer);
}

int mod(char *str)
{
    int n2 = 0;
    int n1 = 0;
    int answer = 0;
    int x = 0;

    for (;str[x] > '9' || str[x] < '0'; x++){}
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n1 = n1 * 10 + (str[x] - 48);
    if (str[x] == '%')
        x = x + 1;
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n2 = n2 * 10 + (str[x] - 48);
    answer = n1 % n2;
    return (answer);
}

int addition(char *str)
{
    int n2 = 0;
    int n1 = 0;
    int answer = 0;
    int x = 0;

    for (;str[x] > '9' || str[x] < '0'; x++){}
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n1 = n1 * 10 + (str[x] - 48);
    if (str[x] == '+')
        x = x + 1;
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n2 = n2 * 10 + (str[x] - 48);
    answer = n1 + n2;
    return (answer);
}

int multiplication(char *str)
{
    int n2 = 0;
    int n1 = 0;
    int answer = 0;
    int x = 0;

    for (;str[x] > '9' || str[x] < '0'; x++){}
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n1 = n1 * 10 + (str[x] - 48);
    if (str[x] == '*')
        x = x + 1;
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n2 = n2 * 10 + (str[x] - 48);
    answer = n1 * n2;
    return (answer);
}

int division(char *str)
{
    int n2 = 0;
    int n1 = 0;
    int answer = 0;
    int x = 0;

    for (;str[x] > '9' || str[x] < '0'; x++){}
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n1 = n1 * 10 + (str[x] - 48);
    if (str[x] == '/')
        x = x + 1;
    for (;str[x] != '\0' && str[x] >= '0' && str[x] <= '9'; x++)
        n2 = n2 * 10 + (str[x] - 48);
    answer = n1 / n2;
    return (answer);
}
