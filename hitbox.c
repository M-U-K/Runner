/*
** EPITECH PROJECT, 2020
** 8.c
** File description:
** 8.c
*/

#include "my_functions.h"

int hitbox_button(data_t *data)
{
    if (data->setting->cursor->pos_cursor.x > data->menu->\
button->coord.x && data->setting->cursor->pos_cursor.y > \
data->menu->button->coord.y && data->setting->cursor->\
pos_cursor.x < data->menu->button->coord.x + data->menu\
->button->lenght.x && data->setting->cursor->pos_cursor.y \
< data->menu->button->coord.y + data->menu->button->lenght.y)
        return (1);
    return (0);
}

void window_close(data_t *data)
{
    sfRenderWindow_close(data->setting->window->window);
}

void add_prev_list(data_t *data)
{
    block_t *actual = data->blocklist_inf->first;

    while (actual->next) {
        actual->next->prev = actual;
        actual = actual->next;
    }
}

void free_block_inf(data_t *data)
{
    block_t *actual = data->blocklist_inf->first;

    add_prev_list(data);
    while (actual->next) {
        actual = actual->next;
        free(actual->prev);
    }
    data->blocklist_inf->first = NULL;
    data->blocklist_inf->nbr = 0;
    data->blocklist_inf->id_total = 0;
}

void restart_map2(data_t *data)
{
    sand_t *actual_sand = data->map->sandlist->first;
    block_t *actual_block = data->blocklist->first;
    snow_t *actual_snow = data->map->snowlist->first;

    while (actual_snow->next) {
        actual_snow->pos1.x = 0;
        sfSprite_setPosition(actual_snow->snow1, actual_snow->pos1);
        actual_snow = actual_snow->next;
    }
    while (actual_sand->next) {
        actual_sand->pos1.x = 0;
        sfSprite_setPosition(actual_sand->sand1, actual_sand->pos1);
        actual_sand = actual_sand->next;
    }
    while (actual_block->next) {
        actual_block->pos = actual_block->org_pos;
        sfSprite_setPosition(actual_block->sprite, actual_block->pos);
        actual_block = actual_block->next;
    }

}
