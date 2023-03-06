/*
** EPITECH PROJECT, 2020
** 14.c
** File description:
** 14.c
*/

#include "my_functions.h"

void event17(data_t *data)
{
    data->menu->button->coord.x = 156*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        sfRenderWindow_setSize(data->setting->window->window, \
data->setting->window->size_800_600);
        if (data->setting->window->org_window_x < 800 || data->\
setting->window->org_window_y < 600)
            sfRenderWindow_setSize(data->setting->window->window, \
data->setting->window->org_size);
    }
    data->menu->button->coord.x = 611*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
}

void event18(data_t *data)
{
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        sfRenderWindow_setSize(data->setting->window->window, data->\
setting->window->size_1280_720);
        if (data->setting->window->org_window_x < 1280 || data->\
setting->window->org_window_y < 720)
            sfRenderWindow_setSize(data->setting->window->window, \
data->setting->window->org_size);
    }
    data->menu->button->coord.x = 1057*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
}

void event_19_2(data_t *data)
{
    data->menu->button->coord.x = 1507*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        sfRenderWindow_setSize(data->setting->window->window, \
data->setting->window->size_1920_1080);
        if (data->setting->window->org_window_x < 1920 || data->\
setting->window->org_window_y < 1080)
            sfRenderWindow_setSize(data->setting->window->window, \
data->setting->window->org_size);
    }
    data->menu->button->button_can_pressed = 1;
}

void event19(data_t *data)
{
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        sfRenderWindow_setSize(data->setting->window->window, \
data->setting->window->size_1600_900);
        if (data->setting->window->org_window_x < 1600 ||\
data->setting->window->org_window_y < 900)
            sfRenderWindow_setSize(data->setting->window->\
window, data->setting->window->org_size);
    }
    event_19_2(data);
}

void event20(data_t *data)
{
    data->menu->button->coord.x = 1243*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        if (data->setting->audio->actual_music == 1) {
            sfMusic_stop(data->setting->audio->flandre);
            sfMusic_play(data->setting->audio->cirno);
            data->setting->audio->actual_music = 0;
        }
        if (data->menu->menu_before_setting == 1)
            data->menu->actual_menu = 2;
        if (data->menu->menu_before_setting == 0)
            data->menu->actual_menu = 1;
    }
    data->menu->button->coord.x = 414*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
}
