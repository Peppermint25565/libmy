/*
** EPITECH PROJECT, 2024
** my_show_word_array
** File description:
** my_show_word_array
*/

#include "../../include/my.h"
#include <stddef.h>

int my_show_word_array(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++) {
        my_putstr(arr[i]);
        my_putchar('\n');
    }
    return 0;
}
