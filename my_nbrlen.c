/*
** EPITECH PROJECT, 2024
** my_nbrlen
** File description:
** my_nbrlen
*/

#include "../../include/my.h"
#include <stddef.h>

int my_nbrlen(int nbr)
{
    int count = 0;

    if (nbr < 0)
        nbr *= -1;
    for (int i = 0; nbr != 0; i++) {
        nbr /= 10;
        count++;
    }
    return count;
}
