/*
** EPITECH PROJECT, 2020
** test_my_strstr.c
** File description:
** tes_m__strstr
*/

#include <criterion/criterion.h>

Test(my_strstr, findstr)
{
    cr_assert_str_eq(my_strstr("oubaymouddenoubay", "moudden"), "mouddenoubay");
}