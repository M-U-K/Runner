/*
** EPITECH PROJECT, 2020
** 17.c
** File description:
** 17.c
*/

#include "my_functions.h"

void update_map_snow(data_t *data)
{
    snow_t *actual_snow = data->map->snowlist->first;

    while (actual_snow->next) {
        actual_snow->past_time = actual_snow->actual_time;
        actual_snow->actual_time = sfTime_asSeconds\
(sfClock_getElapsedTime(data->setting->time->clock));
        actual_snow->diff_time += (actual_snow->actual_time - actual\
_snow->past_time) * (data->setting->time->game_speed * actual_snow->speed);
        actual_snow->diff_time_speed = (actual_snow->actual_time - actual\
_snow->past_time) * (data->setting->time->game_speed);
        update_map_snow2(data, actual_snow);
        actual_snow = actual_snow->next;
    }
}

void update_map(data_t *data)
{

    if (data->menu->actual_menu == 0 && data->player->status == 1) {
        update_map_sand(data);
        update_map_city(data);
        update_map_snow(data);
    }
}

void disp_map2(data_t *data)
{
    snow_t *actual_snow = data->map->snowlist->first;
    city_t *actual_city = data->map->citylist->first;

    if (data->map->actual_map == 2) {
        while (actual_city->next) {
            sfRenderWindow_drawSprite(data->setting->window\
->window, actual_city->city1, NULL);
            actual_city = actual_city->next;
        }
    }
    if (data->map->actual_map == 3) {
        while (actual_snow->next) {
            sfRenderWindow_drawSprite(data->setting->window\
->window, actual_snow->snow1, NULL);
            actual_snow = actual_snow->next;
        }
    }

}

void disp_map(data_t *data)
{
    sand_t *actual_sand = data->map->sandlist->first;

    if (data->map->actual_map == 1) {
        while (actual_sand->next) {
            sfRenderWindow_drawSprite(data->setting->window\
->window, actual_sand->sand1, NULL);
            actual_sand = actual_sand->next;
        }
    }
    disp_map2(data);
}

void disp_block(data_t *data)
{
    block_t *actual;
    if (data->setting->inf == 0)
        actual = data->blocklist->first;
    if (data->setting->inf == 1)
        actual = data->blocklist_inf->first;
    if (data->menu->actual_menu == 0 || data->menu->actual_menu == 69) {
        while (actual->next) {
            sfRenderWindow_drawSprite(data->setting->\
window->window, actual->sprite, NULL);
            actual = actual->next;
        }
    }
}
