/*
** EPITECH PROJECT, 2024
** my_arrlen
** File description:
** my_arrlen
*/

#include "../../include/my.h"

int my_arrlen(char **arr)
{
    int count = 0;

    for (int i = 0; arr[i] != NULL; i++) {
	count++;
    }
    return count;
}
