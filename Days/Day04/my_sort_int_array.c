/*
** EPITECH PROJECT, 2020
** my_sort_in_array.c
** File description:
** 
*/

#include <unistd.h>

void my_sort_int_array(int *array, int size)
{
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] > array[i + 1]) {
            j = array[i];
            array[i] = array [i + 1];
            array[i + 1] = j;
            i = 0;
        }
    }
}