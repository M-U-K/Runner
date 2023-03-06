/*
** EPITECH PROJECT, 2020
** 3.c
** File description:
** 3.c
*/

#include "my_functions.h"

void add_city2(data_t *data, int type, city_t *new, sfVector2f pos)
{
    if (type == 1)
        new->speed = 4;
    if (type == 2)
        new->speed = 20;
    if (type == 3)
        new->speed = 35;
    if (type == 1)
        sfSprite_setTexture(new->city1, data->texture->city1, sfTrue);
    if (type == 2)
        sfSprite_setTexture(new->city1, data->texture->city2, sfTrue);
    if (type == 3)
        sfSprite_setTexture(new->city1, data->texture->city3, sfTrue);
}

void add_city(data_t *data, int type)
{
    city_t *new = malloc(sizeof(city_t));
    sfVector2f pos = {0, 0};

    new->city1 = sfSprite_create();
    new->pos1 = pos;
    new->past_time = 0;
    new->actual_time = 0;
    new->diff_time = 0;
    new->diff_time_speed = 0;
    sfSprite_setPosition(new->city1, pos);
    add_city2(data, type, new, pos);
    new->next = data->map->citylist->first;
    data->map->citylist->first = new;
    data->map->citylist->nbr++;

}

void add_snow2(data_t *data, int type, snow_t *new, sfVector2f pos)
{
    new->snow1 = sfSprite_create();
    new->pos1 = pos;
    new->past_time = 0;
    new->actual_time = 0;
    new->diff_time = 0;
    new->diff_time_speed = 0;
    sfSprite_setPosition(new->snow1, pos);
    if (type == 1)
        new->speed = 0;
    if (type == 2)
        new->speed = 10;
    if (type == 3)
        new->speed = 18;
    if (type == 4)
        new->speed = 4;
    if (type == 5)
        new->speed = 18;
    if (type == 6)
        new->speed = 24;
}

void add_snow3(data_t *data, int type, snow_t *new, sfVector2f pos)
{
    if (type == 2)
        sfSprite_setTexture(new->snow1, data->texture->snow2, sfTrue);
    if (type == 3)
        sfSprite_setTexture(new->snow1, data->texture->snow3, sfTrue);
    if (type == 4)
        sfSprite_setTexture(new->snow1, data->texture->snow4, sfTrue);
    if (type == 5)
        sfSprite_setTexture(new->snow1, data->texture->snow5, sfTrue);
    if (type == 6)
        sfSprite_setTexture(new->snow1, data->texture->snow6, sfTrue);
    if (type == 7)
        sfSprite_setTexture(new->snow1, data->texture->snow7, sfTrue);
}

void add_snow(data_t *data, int type)
{
    snow_t *new = malloc(sizeof(snow_t));
    sfVector2f pos = {0, 0};
    add_snow2(data, type, new, pos);
    if (type == 7)
        new->speed = 36;
    if (type == 1)
        sfSprite_setTexture(new->snow1, data->texture->snow1, sfTrue);
    add_snow3(data, type, new, pos);
    new->next = data->map->snowlist->first;
    data->map->snowlist->first = new;
    data->map->snowlist->nbr++;

}
