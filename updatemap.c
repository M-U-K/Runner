/*
** EPITECH PROJECT, 2020
** 16.c
** File description:
** 16.c
*/

#include "my_functions.h"

void update_map_sand2(data_t *data, sand_t *actual_sand)
{
    if (actual_sand->diff_time >= 0.2) {
        actual_sand->pos1.x -= 1 * ((actual_sand->diff_time/20)\
* actual_sand->speed);
        sfSprite_setPosition(actual_sand->sand1, actual_sand->pos1);
        if (actual_sand->pos1.x <= -1920)
            actual_sand->pos1.x = 0;
        actual_sand->diff_time = 0;
        actual_sand->diff_time_speed = 0;
    }
}

void update_map_sand(data_t *data)
{
    sand_t *actual_sand = data->map->sandlist->first;

    while (actual_sand->next) {
        actual_sand->past_time = actual_sand->actual_time;
        actual_sand->actual_time = sfTime_asSeconds\
(sfClock_getElapsedTime(data->setting->time->clock));
        actual_sand->diff_time += (actual_sand->actual_time - \
actual_sand->past_time) * (data->setting->time->game_speed * \
actual_sand->speed);
        actual_sand->diff_time_speed = (actual_sand->actual_time - \
actual_sand->past_time) * (data->setting->time->game_speed);
        update_map_sand2(data, actual_sand);
        actual_sand = actual_sand->next;
    }
}

void update_map_city2(data_t *data, city_t *actual_city)
{
    if (actual_city->diff_time >= 0.2) {
        actual_city->pos1.x -= 1 * ((actual_city->diff_time/20)\
* actual_city->speed);
        sfSprite_setPosition(actual_city->city1, actual_city->pos1);
        if (actual_city->pos1.x <= -1920)
            actual_city->pos1.x = 0;
        actual_city->diff_time = 0;
        actual_city->diff_time_speed = 0;
    }
}

void update_map_city(data_t *data)
{
    city_t *actual_city = data->map->citylist->first;

    while (actual_city->next) {
        actual_city->past_time = actual_city->actual_time;
        actual_city->actual_time = sfTime_asSeconds\
(sfClock_getElapsedTime(data->setting->time->clock));
        actual_city->diff_time += (actual_city->actual_time - actual\
_city->past_time) * (data->setting->time->game_speed * actual_city->speed);
        actual_city->diff_time_speed = (actual_city->actual_time - \
actual_city->past_time) * (data->setting->time->game_speed);
        update_map_city2(data, actual_city);
        actual_city = actual_city->next;
    }
}

void update_map_snow2(data_t *data, snow_t *actual_snow)
{
    if (actual_snow->diff_time >= 0.2) {
        actual_snow->pos1.x -= 1 * ((actual_snow->diff_time/20)\
* actual_snow->speed);
        sfSprite_setPosition(actual_snow->snow1, actual_snow->pos1);
        if (actual_snow->pos1.x <= -1920)
            actual_snow->pos1.x = 0;
        actual_snow->diff_time = 0;
        actual_snow->diff_time_speed = 0;
    }
}
