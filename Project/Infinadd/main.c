/*
** EPITECH PROJECT, 2020
** test.c
** File description:
** test for the infinadd
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int letter_error(char const *param)
{
    int count = 1;
    int index = 0;

    while (param[index] != '\0') {
        if (param[index] > '9' || param[index] < '0') {
            count = 0;
            break;
        }
        index++;
    }
    return (count);
}

int my_ascii(char a)
{
    if (a <= '9' && a >= '0')
        return (a - 48);
    return (0);
}

char *allocution_ans(char const *param1, char const *param2)
{
    int param_len = my_strlen(param1) + my_strlen(param2) + 1;
    int i = 0;
    int j = 0;
    char *temp = malloc(sizeof(char) * param_len);

    while (i < param_len) {
        temp[i] = 0;
        i++;
        j++;
    }
    return (temp);
}

char *calc(char const *param1, char const *param2)
{
    int i = 0;
    int carry = 0;
    char *answer = allocution_ans(param1, param2);
    int paraml2 = my_strlen(param2) - 1;
    int paraml1 = my_strlen(param1) - 1;
    int add2 = 0;
    int add1 = 0;

    while (paraml1 >= 0 || paraml2 >= 0 || carry != 0) {
        add2 = (paraml2 >= 0) ? my_ascii(param2[paraml2]) : 0;
        add1 = (paraml1 >= 0) ? my_ascii(param1[paraml1]) : 0;
        answer[i] = ((add1 + add2 + carry) % 10) + 48;
        carry = (add1 + add2 + carry) / 10;
        paraml2--;
        paraml1--;
        i++;
    }
    answer = my_revstr(answer);
    return (answer);
}

int main(int argc, char const **argv)
{
    char *answer = NULL;
    if (letter_error(argv[1]) == 0 || letter_error(argv[2]) == 0)
        return (84);
    if (argc != 3)
        return (84);
    answer = calc(argv[1], argv[2]);
    my_putstr(answer);
    my_putchar('\n');
    free(answer);
    return (0);
}