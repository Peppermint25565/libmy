/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** my_strlen
*/

#include "../../include/my.h"
#include <stddef.h>

int my_strlen(char const *str)
{
    int count = 0;

    if (str == NULL)
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}
