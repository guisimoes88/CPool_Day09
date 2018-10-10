/*
** EPITECH PROJECT, 2018
** my params to array
** File description:
** in a struct
*/

#include "my.h"
#include "struct.h"
#include <stdlib.h>
#include <unistd.h>

static struct info_param fill_info_param(char *arg)
{
    struct info_param i_param;

    i_param.length = my_strlen(arg);
    i_param.str = arg;
    i_param.copy = my_strdup(arg);
    i_param.word_array = my_str_to_word_array(arg);
    return (i_param);
}


struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *info_param = malloc(sizeof(struct info_param) * ac);
    int i = 0;

    while (i != ac) {
        info_param[i] = fill_info_param(av[i]);
        i += 1;
    }
    info_param[i].length = -1;
    info_param[i].str = NULL;
    info_param[i].copy = NULL;
    info_param[i].word_array = NULL;
    return (info_param);
}
