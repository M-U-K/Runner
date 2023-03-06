/*
** EPITECH PROJECT, 2020
** 23.c
** File description:
** 23.c
*/

#include "my_functions.h"

void set_block(data_t *data)
{
    int x;
    int y;

    for (y = 0; y != data->blocklist->size_txt; y++) {
        for (x = 0; data->blocklist->map_block[y][x] != '\n'; x++) {
            set_coord(x, y, data);
        }
    }
}

int create_random(int max, int nega)
{
    return ((rand() % max) - nega);
}

void random_inf_block(data_t *data, int space, int blockadd, block_t *actual)
{
    if (actual->pos.y >= 960 && blockadd == 0) {
        add_block_inf(data, 0, ((actual->pos.x))+(48*space), \
(actual->pos.y)+(48*create_random(2, 1)));
        blockadd = 1;
    }
    if (actual->pos.y <= 192 && blockadd == 0) {
        add_block_inf(data, 0, ((actual->pos.x))+(48*space), \
(actual->pos.y)+(48*create_random(2, 0)));
        blockadd = 1;
    }
    if (actual->pos.y > 192 && actual->pos.y < 960 && blockadd == 0) {
        add_block_inf(data, 0, ((actual->pos.x))+\
(48*space), (actual->pos.y)+(48*create_random(3, 1)));
        blockadd = 1;
    }
}

void end_gest_inf(data_t *data, block_t *actual)
{
    if (create_random(15, 0) == 1)
        add_block_inf(data, 1, actual->pos.x, actual->pos.y - 48);
    add_prev_list(data);
    update_texture_block(data);
}

void set_inf_block(data_t *data)
{
    block_t *actual;
    int rand = 0;
    int blockadd = 0;
    int space = 1;

    if (data->blocklist_inf->nbr == 0)
        for (int cmp = -1; cmp != 5; cmp ++)
            add_block_inf(data, 0, (cmp*48), 17*48);
    while (data->blocklist_inf->nbr != 21) {
        actual = data->blocklist_inf->first;
        while (actual->block == 1)
            actual = actual->next;
        if (create_random(4+space, 0) || space >= 3) {
            random_inf_block(data, space, blockadd, actual);
            space = 1;
        }
        else
            space++;
        blockadd = 0;
    }
    end_gest_inf(data, actual);
}
