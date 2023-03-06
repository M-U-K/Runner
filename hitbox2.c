/*
** EPITECH PROJECT, 2020
** 19.c
** File description:
** 19.c
*/

#include "my_functions.h"

void hit_box_block(data_t *data)
{
    block_t *actual = data->blocklist->first;

    if (data->blocklist_inf->nbr != 0)
        actual = data->blocklist_inf->first;
    while (actual->next) {
        col_in(data->player, actual, data);
        actual = actual->next;
    }
}

void update_player_rect2(data_t *data)
{
    if (data->player->actual_act == 0) {
        data->player->rect.top = 0;
        data->player->rect.left = 0;
        data->player->rect.width = 90;
        data->player->rect.height = 90;
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
    }
    if (data->player->actual_act == 90) {
        data->player->rect.top = 90;
        data->player->rect.left = 0;
        data->player->rect.width = 70;
        data->player->rect.height = 80;
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
    }
}

void update_player_rect3(data_t *data)
{
    if (data->player->actual_act == 170) {
        data->player->rect.top = 170;
        data->player->rect.left = 0;
        data->player->rect.width = 70;
        data->player->rect.height = 80;
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
    }
    if (data->player->actual_act == 250) {
        data->player->rect.top = 260;
        data->player->rect.left = 0;
        data->player->rect.width = 80;
        data->player->rect.height = 80;
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
    }
}

void update_player_rect(data_t *data)
{
    update_player_rect2(data);
    update_player_rect3(data);
    if (data->player->actual_act == 333) {
        data->player->rect.top = 333;
        data->player->rect.left = 0;
        data->player->rect.width = 70;
        data->player->rect.height = 80;
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
    }
    if (data->player->actual_act == 411) {
        data->player->rect.top = 411;
        data->player->rect.left = 10;
        data->player->rect.width = 70;
        data->player->rect.height = 80;
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
    }
}

void act_player1(data_t *data)
{
    if (data->player->actual_act == 0) {
        if (data->player->rect.left == 910) {
            data->player->rect.left = 0;
            data->player->actual_pos = 0;
        }
        data->player->actual_pos += 91;
        data->player->rect.left += 91;
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
        data->player->diff_time_anime = 0;
    }
    if (data->player->actual_act == 90) {
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
        data->player->actual_pos += 70;
        data->player->rect.left += 70;
        if (data->player->rect.left == 350) {
            data->player->rect.left = 0;
            data->player->actual_pos = 0;
        }
        data->player->diff_time_anime = 0;
    }
}
