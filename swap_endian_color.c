/*
** EPITECH PROJECT, 2018
** swap endian color
** File description:
** sap endian color
*/

#include "my.h"
#include "struct.h"

union u_color
{
    int color;
    char components[4];
};

static int my_swap_char(char *a, char *b)
{
    if (a != b ) {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
    return (0);
}

int swap_endian_color(int color)
{
    union u_color c;

    c.color = color;
    my_swap_char(c.components, c.components + 1);
    my_swap_char(c.components + 1, c.components + 2);
    my_swap_char(c.components + 2, c.components + 3);
    return (c.color);
}
