/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** my_strdup
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_strndup(char const *src, int n)
{
    int len = my_strlen(src);
    char *str = malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < n; i++) {
        str[i] = src[i];
        str[i + 1] = '\0';
    }
    return str;
}
