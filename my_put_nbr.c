/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nbr)
{
    if (nbr == NULL)
	return 0;
    if (nbr < 0) {
	my_putchar('-');
	nbr *= -1;
    }
    for (int i = 0; nbr != 0; i++) {
	my_putchar('0' + nbr % 10);
	nbr /= 10;
    }
    return 0;
}
