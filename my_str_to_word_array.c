/*
** EPITECH PROJECT, 2024
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include "../../include/my.h"
#include <stdlib.h>

int count_arr(char const *str)
{
    int count = 0;
    int a = 0;
    int b = 0;

    while (str[b] != '\0') {
        while (my_isalphanum(str[a]) == 1 && str[a] != '\0') {
            a++;
            b++;
        }
        while (my_isalphanum(str[b]) && str[b] != '\0') {
            b++;
        }
        count++;
        a = b;
    }
    return count;
}

char **my_str_to_word_array(char const *str)
{
    int count_arr = count_arr(str);
    char **arr = malloc(sizeof(char *) * count_arr);
    int arr_index = 0;
    int a = 0;
    int b = 0;

    if (str == NULL)
        return arr;
    while (arr_index != count_arr) {
        while (my_isalphanum(str[a]) == 1 && str[a] != '\0') {
            a++;
            b++;
        }
        while (my_isalphanum(str[b]) == 0 && str[b] != '\0'){
            b++;
        }
        arr[arr_index] = my_strndup(str + a, b - a);
        arr_index++;
        a = b;
    }
    return arr;
}
