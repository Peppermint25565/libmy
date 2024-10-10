/*
** EPITECH PROJECT, 2024
** my_isalpha
** File description:
** my_isalpha
*/

#include "../../include/my.h"

int my_isalpha(char c)
{
    if (('@' < c && c < '[') && ('`' < c && c < '{'))
	return 0;
    return 1;
}
