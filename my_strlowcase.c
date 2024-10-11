/*
** EPITECH PROJECT, 2024
** my_strupcase.c
** File description:
** my_strupcase.c
*/

#include "../../include/my.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && 'Z' >= str[i]) {
            str[i] += 32;
        }
    }
    return str;
}
