/*
** EPITECH PROJECT, 2020
** 20.c
** File description:
** 20.c
*/

#include "my_functions.h"

void act_player2(data_t *data)
{
    if (data->player->actual_act == 170) {
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
        data->player->actual_pos += 70;
        data->player->rect.left += 70;
        if (data->player->rect.left == 490) {
            data->player->rect.left = 0;
            data->player->actual_pos = 0;
        }
        data->player->diff_time_anime = 0;
    }
    if (data->player->actual_act == 250) {
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
        data->player->actual_pos += 80;
        data->player->rect.left += 80;
        if (data->player->rect.left == 640) {
            data->menu->actual_menu = 2;
            restart_map(data);
        }
        data->player->diff_time_anime = 0;
    }
}

void act_player3(data_t *data)
{
    if (data->player->actual_act == 333) {
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
        data->player->actual_pos += 70;
        data->player->rect.left += 70;
        if (data->player->rect.left == 140) {
            data->player->rect.left = 0;
            data->player->actual_pos = 0;
        }
        data->player->diff_time_anime = 0;
    }
    if (data->player->actual_act == 411) {
        sfSprite_setTextureRect(data->player->sprite, data->player->rect);
        data->player->actual_pos += 70;
        data->player->rect.left += 70;
        if (data->player->rect.left >= 140) {
            data->player->rect.left = 10;
            data->player->actual_pos = 10;
        }
        data->player->diff_time_anime = 0;
    }
}

void update_player3(data_t *data)
{
    if (data->player->grav == -1 && data->player->actual_act != 250) {
        if (data->player->actual_act != 333 || data->player->actual_act == 0) {
            data->player->actual_act = 333;
            update_player_rect(data);
        }
        data->player->boost = 0;
        data->player->pos.y -= 1 * (data->player->\
diff_time_speed) * data->player->jump_boost;
        data->player->jump_boost -= 0.02 * data->player->diff_time_speed;
    }
    sfSprite_setPosition(data->player->sprite, data->player->pos);
    if (data->player->pos.y > 1000) {
        if (data->setting->cheat == 0) {
            data->menu->actual_menu = 2;
            restart_map(data);
        }
        if (data->setting->cheat == 1)
            data->player->pos.y = 0;
    }
    data->player->diff_time_move = 0;
}

void update_player2(data_t *data)
{
    if (data->menu->actual_menu == 0) {
        if (data->player->grav != -1)
            data->player->grav = 1;
    }
    if (data->player->status == 1)
        hit_box_block(data);
    if (data->player->grav == 1 && data->player->actual_act != 250) {
        if (data->player->actual_act != 411 || data->player->actual_act == 0) {
            data->player->actual_act = 411;
            update_player_rect(data);
        }
        if (data->player->grav == 1)
            data->player->pos.y += 1 * (data->player->\
diff_time_speed) * data->player->boost;
        data->player->boost += 0.07 * data->player->diff_time_speed;
    }
    update_player3(data);
}

void clock_player(data_t *data)
{
    data->player->past_time = data->player->actual_time;
    data->player->actual_time = sfTime_asSeconds\
(sfClock_getElapsedTime(data->setting->time->clock));
    data->player->diff_time_move += (data->player->actual_time - \
data->player->past_time) * (data->setting->time->game_speed * data->\
player->speed) * 120;
    data->player->diff_time_anime += (data->player->actual_time - \
data->player->past_time) * (data->setting->time->game_speed * data-> \
player->speed) * 10;
    data->player->diff_time_grav += (data->player->actual_time - \
data->player->past_time) * (data->setting->time->game_speed * data->\
player->speed) * 10;
    data->player->diff_time_speed = (data->player->actual_time - \
data->player->past_time) * (data->setting->time->game_speed * data-> \
player->speed) * 200;
}
