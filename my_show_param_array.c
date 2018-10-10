/*
** EPITECH PROJECT, 2018
** show param array
** File description:
** same
*/

#include "my.h"
#include "struct.h"
#include <unistd.h>

int my_show_param_array(struct info_param const *par)
{
    int i = 0;
    
    while (par[i].str != NULL) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
        my_putchar('\n');
        i += 1;
    }
    return (0);
}
