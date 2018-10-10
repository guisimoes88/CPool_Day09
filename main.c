/*
** EPITECH PROJECT, 2018
** main 
** File description:
** amin
*/

#include "my.h"
#include "my_macroABS.h"
#include "struct.h"
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    /* struct info_param *info_param = NULL; */

    /* info_param = my_params_to_array(ac, av); */
    /* my_show_param_array(info_param); */
    printf("%x\n", swap_endian_color(get_color(av[1][0], av[2][0], av[3][0])));
}
