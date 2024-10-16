/*
** EPITECH PROJECT, 2024
** my_put_error
** File description:
** my_put_error
*/

#include "../../include/my.h"
#include <unistd.h>

int my_put_error(char *str)
{
    return write(2, str, my_strlen(str));
}
