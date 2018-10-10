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

    if (red < 0 || 255 < red || green < 0 || 255 < green ||
        blue < 0 || blue > 255)
        return -1;
    red = red >> 3;
    green = green >> 2;
    blue = blue >> 3;
    result = (red << (5 + 6)) | (green << 5) | blue;
    return (result);
}
