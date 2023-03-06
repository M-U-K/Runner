/*
** EPITECH PROJECT, 2020
** 26.c
** File description:
** 26.c
*/

#include "my_functions.h"

void set_map(data_t *data)
{
    for (int i = 10; i != 0; i --)
        add_sand(data, i);
    for (int i = 7; i != 0; i --)
        add_snow(data, i);
    for (int i = 3; i != 0; i --)
        add_city(data, i);
}

void set_player(data_t *data)
{
    if (data->player->actual_player == 1)
        sfSprite_setTexture(data->player->sprite, \
data->texture->cirno, sfTrue);
    if (data->player->actual_player == 2)
        sfSprite_setTexture(data->player->sprite, \
data->texture->cirno2, sfTrue);
    if (data->player->actual_player == 3)
        sfSprite_setTexture(data->player->sprite, \
data->texture->cirno3, sfTrue);
    if (data->player->actual_player == 4)
        sfSprite_setTexture(data->player->sprite, \
data->texture->cirno4, sfTrue);
}

void update_hud(data_t *data)
{
    if (data->menu->actual_menu == 0 && data->player->status == 1) {
        data->hud->past_time = data->hud->actual_time;
        data->hud->actual_time = sfTime_asSeconds\
(sfClock_getElapsedTime(data->setting->time->clock));
        data->hud->diff_time += (data->hud->actual_time - \
data->hud->past_time) * data->setting->time->game_speed;
        data->hud->diff_time_speed = (data->hud->actual_time - \
data->hud->past_time) * (data->setting->time->game_speed);
        if (data->hud->diff_time >= 0.1) {
            data->hud->score += 100;
            nbr(data->hud->score, data->hud->score_text);
            sfText_setString(data->hud->text, data->hud->score_text);
            data->hud->diff_time = 0;
        }
    }

}

void disp_hud(data_t *data)
{
    if (data->menu->actual_menu == 69) {
        sfRenderWindow_drawText(data->setting->window->window, \
data->hud->text2, NULL);
    }
    if (data->menu->actual_menu == 0) {
        sfRenderWindow_drawText(data->setting->window->window, \
data->hud->text2, NULL);
        sfRenderWindow_drawText(data->setting->window->window, \
data->hud->text, NULL);
    }
}

void game(data_t *data)
{
    update_map(data);
    disp_map(data);
    update_block(data);
    disp_block(data);
    update_player(data);
    disp_player(data);
    disp_menu(data);
    update_hud(data);
    disp_hud(data);
    sfRenderWindow_display(data->setting->window->window);
    event(data);
}
