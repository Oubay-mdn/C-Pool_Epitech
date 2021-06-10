/*
** EPITECH PROJECT, 2020
** test_ly_strcapitalize.c
** File description:
** cpool
*/

#include  <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, strcapouais)
{
    char str1[] = "word oUi roberto, 42rRover nico+nIco, ouai-lad";
    cr_assert_str_eq(my_strcapitalize(str1),
    "Word Oui Roberto, 42rrover Nico+Nico, Ouai-Lad");
}