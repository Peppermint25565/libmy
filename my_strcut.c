/*
** EPITECH PROJECT, 2024
** my_strcut
** File description:
** my_strcut
*/

#include "../../include/my.h"

char *my_strcut(char *str, int index, int len)
{
    char *out = malloc(sizeof(char) * (len + 1));

    out[len] = '\0';
    for (int i = 0; i < len; i++) {
        out[i] = str[index + i];
    }
    return out;
}
