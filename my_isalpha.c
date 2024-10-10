/*
** EPITECH PROJECT, 2024
** my_isalpha
** File description:
** my_isalpha
*/

#include "../../include/my.h"

int my_isalpha(char c)
{
    if ((100 < c && c < 133) || (141 < c && c < 173))
        return 0;
    return 1;
}
