/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
	count++;
    }
    return count;
}
