#!/usr/bin/env bash
##
## EPITECH PROJECT, 2024
## build.sh
## File description:
## build.sh
##

cc *.c -c -I../../include/
ar rc -o libmy.a *.o
rm -rf *.o
