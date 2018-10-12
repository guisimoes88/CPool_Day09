/*
** EPITECH PROJECT, 2018
** get color
** File description:
** from RGB
*/

#include "my.h"
#include <stdio.h>

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int result = 0;

    result = (red << 24) | (green << 8) | blue;
    return (result);
}
