/*
** EPITECH PROJECT, 2020
** 24.c
** File description:
** 24.c
*/

#include "my_functions.h"

void gest_update_block(data_t *data, block_t *save, block_t *actual)
{
    if (data->blocklist_inf->speed < 4)
        data->blocklist_inf->speed += 0.0004*data->blocklist_inf->speed;
    actual = data->blocklist_inf->first;
    while (actual->next) {
        actual->pos.x -= 1 * (data->blocklist_inf->diff_time*20);
        sfSprite_setPosition(actual->sprite, actual->pos);
        actual = actual->next;
        if (actual->prev->pos.x < -40 && actual->prev->id != 0) {
            data->blocklist_inf->id_suppr = actual->prev->id;
            save = actual->prev->prev;
            actual->prev->prev->next = actual;
            free(actual->prev);
            actual->prev = save;
            data->blocklist_inf->nbr--;
        }
    }
    data->blocklist_inf->diff_time = 0;
}

void update_block2(data_t *data, block_t *actual)
{
    if (data->blocklist->diff_time >= 0.1) {
        actual = data->blocklist->first;
        while (actual->next) {
            actual->pos.x -= 1 * (data->blocklist->diff_time*20);
            sfSprite_setPosition(actual->sprite, actual->pos);
            actual = actual->next;
        }
        data->blocklist->diff_time = 0;
    }
}

void update_block_inf(data_t *data, block_t *actual, block_t *save)
{
    if (data->menu->actual_menu == 0 && data->\
setting->inf == 1 && data->player->status == 1) {
        data->blocklist_inf->past_time = data->blocklist_inf->actual_time;
        data->blocklist_inf->actual_time = sfTime_asSeconds\
(sfClock_getElapsedTime(data->setting->time->clock));
        data->blocklist_inf->diff_time += (data->blocklist_inf->\
actual_time - data->blocklist_inf->past_time) * (data->setting->\
time->game_speed * data->blocklist_inf->speed) * 10;
        data->blocklist_inf->diff_time_speed = (data->blocklist_inf->\
actual_time - data->blocklist_inf->past_time) * (data->setting->time->\
game_speed);
        if (data->blocklist_inf->diff_time >= 0.1) {
            gest_update_block(data, save, actual);
        }
        if (data->blocklist_inf->nbr <= 20) {
            set_inf_block(data);
            update_texture_block(data);
        }
    }
}

void update_block(data_t *data)
{
    block_t *actual;
    block_t *save;

    if (data->menu->actual_menu == 0 && data->setting->inf == 0 \
&& data->player->status == 1) {
        data->blocklist->past_time = data->blocklist->actual_time;
        data->blocklist->actual_time = sfTime_asSeconds\
(sfClock_getElapsedTime(data->setting->time->clock));
        data->blocklist->diff_time += (data->blocklist->actual_time - data->\
blocklist->past_time) * (data->setting->time->game_speed * \
data->blocklist->speed) * 10;
        data->blocklist->diff_time_speed = (data->blocklist->actual_time - \
data->blocklist->past_time) * (data->setting->time->game_speed);
        update_block2(data, actual);
    }
    update_block_inf(data, actual, save);
}

void change_grass2(block_t *actual, data_t *data, block_t *actual_comp)
{
    actual_comp->rect_hitbox.top += 1;
    if (data->setting->inf == 0)
        if (sfFloatRect_intersects(&actual->\
rect_hitbox, &actual_comp->rect_hitbox, NULL))
            actual->rect.left = 32;
    actual_comp->rect_hitbox.top -= 1;
}
