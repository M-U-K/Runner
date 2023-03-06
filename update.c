/*
** EPITECH PROJECT, 2020
** 21.c
** File description:
** 21.c
*/

#include "my_functions.h"

void update_player(data_t *data)
{
    if (data->menu->actual_menu == 69 || data->menu->actual_menu == 0) {
        clock_player(data);

        if (data->player->diff_time_grav >= 5 && data->player->grav     \
== -1 && data->menu->actual_menu == 0) {
            data->player->grav = 1;
        }
        if (data->player->diff_time_move >= 0.1 && data->\
menu->actual_menu == 0) {
            update_player2(data);
        }
        if (data->player->diff_time_anime >= 1) {
            act_player1(data);
            act_player2(data);
            act_player3(data);
        }
    }
}

void disp_player(data_t *data)
{
    if (data->menu->actual_menu == 0 || data->menu->actual_menu == 69)
        sfRenderWindow_drawSprite(data->\
setting->window->window, data->player->sprite, NULL);
}

void disp_menu2(data_t *data)
{
    if (data->menu->actual_menu == 4)
        sfRenderWindow_drawSprite(data->\
setting->window->window, data->menu->menu4, NULL);
    if (data->menu->actual_menu == 5)
        sfRenderWindow_drawSprite(data->\
setting->window->window, data->menu->menu5, NULL);
    if (data->menu->actual_menu == 6)
        sfRenderWindow_drawSprite(data->\
setting->window->window, data->menu->menu6, NULL);
    if (data->menu->actual_menu == 7)
        sfRenderWindow_drawSprite(data->\
setting->window->window, data->menu->menu7, NULL);

}

void disp_menu(data_t *data)
{
    if (data->menu->actual_menu == 1)
        sfRenderWindow_drawSprite(data->\
setting->window->window, data->menu->menu1, NULL);
    if (data->menu->actual_menu == 2)
        sfRenderWindow_drawSprite(data->\
setting->window->window, data->menu->menu2, NULL);
    if (data->menu->actual_menu == 3)
        sfRenderWindow_drawSprite(data->\
setting->window->window, data->menu->menu3, NULL);
    disp_menu2(data);
}

void set_music(data_t *data)
{
    sfMusic_setLoop(data->setting->audio->flandre, 1);
    sfMusic_setLoop(data->setting->audio->cirno, 1);
    sfMusic_setVolume(data->setting->audio->cirno, 20);
    sfMusic_setVolume(data->setting->audio->flandre, 20);
    sfMusic_setVolume(data->setting->audio->jump, 40);
    sfMusic_play(data->setting->audio->flandre);
    data->setting->audio->actual_music = 1;
}
