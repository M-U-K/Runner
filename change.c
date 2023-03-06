/*
** EPITECH PROJECT, 2020
** 25.c
** File description:
** 25.c
*/

#include "my_functions.h"

void change_grass(block_t *actual, data_t *data)
{
    block_t *actual_comp;

    if (data->setting->inf == 0)
        actual_comp = data->blocklist->first;
    if (data->setting->inf == 1)
        actual_comp = data->blocklist_inf->first;
    while (actual_comp->next) {
        if (actual_comp->id != actual->id) {
            change_grass2(actual, data, actual_comp);
        }
        actual_comp = actual_comp->next;
    }
}

void map_change_texture(data_t *data, block_t *actual)
{
    if (data->map->actual_map == 1) {
        actual->rect.top = 16;
    }
    if (data->map->actual_map == 2) {
        actual->rect.top = 32;
    }
    if (data->map->actual_map == 3) {
        actual->rect.top = 0;
    }
}

void change_texture_block(data_t *data)
{
    block_t *actual;

    if (data->setting->inf == 0)
        actual = data->blocklist->first;
    if (data->setting->inf == 1)
        actual = data->blocklist_inf->first;
    while (actual->next) {
        if (actual->block == 0) {
            map_change_texture(data, actual);
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual = actual->next;
    }

}

void map_texture_block(data_t *data, block_t *actual)
{
    if (data->map->actual_map == 1) {
        actual->rect.top = 16;
    }
    if (data->map->actual_map == 2) {
        actual->rect.top = 32;
    }
    if (data->map->actual_map == 3) {
        actual->rect.top = 0;
    }
    if (actual->pos.y > 768) {
        actual->rect.left = 16;
        if (actual->pos.y > 816)
            change_grass(actual, data);
    }
}

void update_texture_block(data_t *data)
{
    block_t *actual;

    if (data->setting->inf == 0)
        actual = data->blocklist->first;
    if (data->setting->inf == 1)
        actual = data->blocklist_inf->first;
    while (actual->next) {
        if (actual->block == 0) {
            map_texture_block(data, actual);
        }
        sfSprite_setTextureRect(actual->sprite, actual->rect);
        actual = actual->next;
    }
}
