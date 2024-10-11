/*
** EPITECH PROJECT, 2024
** my_isalpha
** File description:
** my_isalpha
*/

#include "../../include/my.h"

int my_isalphanum(char c)
{
    if ('a' <= c && c <= 'z')
        return 0;
    if ('A' < c && c < 'Z')
        return 0;
    if ('0' <= c && c <= '9')
        return 0;
    return 1;
}
