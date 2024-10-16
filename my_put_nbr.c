/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../../include/my.h"
#include <stddef.h>

int my_put_nbr(int nbr)
{
    int len = my_nbrlen(nbr);
    char temp[len + 1];

    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
    }
    if (nbr == 0) {
	my_putstr("0");
	return 0;
    }
    for (int i = 0; nbr != 0; i++) {
        temp[i] = '0' + nbr % 10;
        nbr /= 10;
    }
    temp[len] = '\0';
    my_putstr(my_revstr(temp));
    return 0;
}
