/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "my_functions.h"

void help(void)
{
    my_putstr("\nUsage: ./my_runner 'map' \nExample: ./m\
y_runner My_map/Map_1\n\nKey: Space:  Jump\n     M:      \
Mute sound jump\n     C:      Cheat mode\n     Escape: \
Pause\n\nBy default there are 3 map: Map_1, Map_2, Map_3\
\nyou can create your own map with a text file\nin infin\
ity mode the speed raise up with the time\nyou can chang\
e the background and player when you want in setting men\
u\n\n");
}

int main(int ac, char **av)
{
    data_t *data;
    srand(time(NULL));
    if (av[1][0] == '-' && av[1][1] == 'h')
        help();
    if (gest_error(ac, av))
        return (84);
    if (av[1][0] != '-' && av[1][1] != 'h') {
        data = init_data(ac, av);
        create_map_block(data);
        start(data);
    }
}
