/*
** EPITECH PROJECT, 2020
** 4.c
** File description:
** 4.c
*/

#include "my_functions.h"

void add_sand2(data_t *data, int type, sand_t *new, sfVector2f pos)
{
    new->sand1 = sfSprite_create();
    new->pos1 = pos;
    new->past_time = 0;
    new->actual_time = 0;
    new->diff_time = 0;
    new->diff_time_speed = 0;
    sfSprite_setPosition(new->sand1, pos);
    if (type == 1)
        new->speed = 0;
    if (type == 2)
        new->speed = 0;
    if (type == 3)
        new->speed = 2;
    if (type == 4)
        new->speed = 4;
    if (type == 5)
        new->speed = 8;
    if (type == 6)
        new->speed = 12;
}

void add_sand3(data_t *data, int type, sand_t *new, sfVector2f pos)
{
    if (type == 7)
        new->speed = 18;
    if (type == 8)
        new->speed = 24;
    if (type == 9)
        new->speed = 36;
    if (type == 10)
        new->speed = 50;
    if (type == 1)
        sfSprite_setTexture(new->sand1, data->texture->sand1, sfTrue);
    if (type == 2)
        sfSprite_setTexture(new->sand1, data->texture->sand2, sfTrue);
    if (type == 3)
        sfSprite_setTexture(new->sand1, data->texture->sand3, sfTrue);
    if (type == 4)
        sfSprite_setTexture(new->sand1, data->texture->sand4, sfTrue);
    if (type == 5)
        sfSprite_setTexture(new->sand1, data->texture->sand5, sfTrue);
    if (type == 6)
        sfSprite_setTexture(new->sand1, data->texture->sand6, sfTrue);
}

void add_sand(data_t *data, int type)
{
    sand_t *new = malloc(sizeof(sand_t));
    sfVector2f pos = {0, 0};

    add_sand2(data, type, new, pos);
    add_sand3(data, type, new, pos);
    if (type == 7)
        sfSprite_setTexture(new->sand1, data->texture->sand7, sfTrue);
    if (type == 8)
        sfSprite_setTexture(new->sand1, data->texture->sand8, sfTrue);
    if (type == 9)
        sfSprite_setTexture(new->sand1, data->texture->sand9, sfTrue);
    if (type == 10)
        sfSprite_setTexture(new->sand1, data->texture->sand10, sfTrue);
    new->next = data->map->sandlist->first;
    data->map->sandlist->first = new;
    data->map->sandlist->nbr++;
}

map_t *init_map(data_t *data)
{
    map_t *new = malloc(sizeof(map_t));

    new->snowlist = init_map_snow(data);
    new->citylist = init_map_city(data);
    new->sandlist = init_map_sand(data);
    new->actual_map = 1;
    return (new);
}

void init_player2(data_t *data, player_t *new)
{
    new->speed = 1;
    new->jump = 0;
    new->past_time = 0;
    new->actual_time = 0;
    new->diff_time_move = 0;
    new->diff_time_rect = 0;
    new->grav = 1;
    new->actual_act = 90;
    new->actual_pos = 0;
    new->diff_time_speed = 0;
}
