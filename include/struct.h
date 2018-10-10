/*
** EPITECH PROJECT, 2018
** struc header
** File description:
** same
*/

struct info_param
{
    int length;
    char *str;
    char *copy;
    char **word_array;
};

struct info_param *my_params_to_array(int, char **);
int my_show_param_array(struct info_param const *);
int get_color(unsigned char, unsigned char, unsigned char);
int swap_endian_color(int);
