/*
** EPITECH PROJECT, 2020
** test_my_revstr.c
** File description:
** 
*/

#include <criterion/criterion.h>

Test(my_revstr, copy_five_characters_in_empty_array)
{
    char str[] = "abc";

    my_revstr(str);
    cr_assert_str_eq(str, "cba");
}
