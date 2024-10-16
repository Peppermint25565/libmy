/*
** EPITECH PROJECT, 2024
** my_strcmp
** File description:
** my_strcmp
*/

#include "../../include/my.h"

int my_strcmp(char *a, char *b)
{
    int len_a = my_strlen(a);
    int len_b = my_strlen(b);
    int len_min = len_a;

    if (len_b < len_a)
	len_min = len_b;
    for (int i = 0; i < len_min; i++) {
	if (a[i] != b[i])
	    return a - b;
    }
    if (len_a > len_b)
	return a[len_b];
    if (len_b < len_a)
	return -b[len_a];
    return 0;
}
