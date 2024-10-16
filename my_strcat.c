/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** my_strcat
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_strcat(char const *a, char const *b)
{
    int len_a = my_strlen(a);
    int len_b = my_strlen(b);
    char *out = malloc(sizeof(char) * (len_a + len_b + 1));

    for (int i = 0; i < len_a; i++) {
        out[i] = a[i];
    }
    for (int i = 0; i < len_b; i++) {
        out[len_a + i] = b[i];
    }
    out[len_a + len_b] = '\0';
    return out;
}
