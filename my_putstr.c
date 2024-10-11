/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** my_putstr
*/


#include "../../include/my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
