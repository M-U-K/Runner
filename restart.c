/*
** EPITECH PROJECT, 2020
** 9.c
** File description:
** 9.c
*/

#include "my_functions.h"

void restart_map(data_t *data)
{
    city_t *actual_city = data->map->citylist->first;

    data->blocklist_inf->speed = 1;
    data->player->pos.y = 730;
    data->hud->score = 0;
    free(data->hud->score_text);
    data->hud->score_text = malloc(sizeof(char));
    sfText_setString(data->hud->text, data->hud->score_text);
    sfSprite_setPosition(data->player->sprite, data->player->pos);
    data->player->boost = 0;
    data->player->status = 1;
    data->setting->inf = 0;
    while (actual_city->next) {
        actual_city->pos1.x = 0;
        sfSprite_setPosition(actual_city->city1, actual_city->pos1);
        actual_city = actual_city->next;
    }
    restart_map2(data);
    if (data->blocklist_inf->nbr != 0)
        free_block_inf(data);
    reset_clock(data);
}

void nbr(int nb, char *str)
{
    int d = 1;
    int cmp = 0;
    if (nb < 0) {
        nb = nb * -1;
    }
    while ((nb / d) >= 10)
        d = d * 10;
    while (d > 0) {
        str[cmp] = (nb / d) % 10 + '0';
        cmp++;
        d = d / 10;
    }
}

void reset_clock2(data_t *data)
{
    data->player->diff_time_anime = 0;
    data->player->diff_time_grav = 0;
    data->player->actual_time = 0;
    data->player->past_time = 0;
    data->player->diff_time_speed = 0;
    data->blocklist->diff_time = 0;
    data->blocklist->actual_time = 0;
    data->blocklist->past_time = 0;
    data->blocklist->diff_time_speed = 0;
    data->blocklist_inf->diff_time = 0;
    data->blocklist_inf->actual_time = 0;
    data->blocklist_inf->past_time = 0;
    data->blocklist_inf->diff_time_speed = 0;
}

void reset_clock3(data_t *data)
{
    data->hud->past_time = 0;
    data->hud->actual_time = 0;
    data->hud->diff_time = 0;
    data->hud->diff_time_speed = 0;
    data->player->grav = 0;
    data->player->boost = 0;
    data->player->jump_boost = 0;
    data->player->diff_time_move = 0;
    data->player->diff_time_rect = 0;
}

void reset_clock4(data_t *data)
{
    sand_t *actual_sand = data->map->sandlist->first;
    snow_t *actual_snow = data->map->snowlist->first;

    while (actual_snow->next) {
        actual_snow->diff_time = 0;
        actual_snow->actual_time = 0;
        actual_snow->past_time = 0;
        actual_snow->diff_time_speed = 0;
        actual_snow = actual_snow->next;
    }
    while (actual_sand->next) {
        actual_sand->diff_time = 0;
        actual_sand->actual_time = 0;
        actual_sand->past_time = 0;
        actual_sand->diff_time_speed = 0;
        actual_sand = actual_sand->next;
    }
}
