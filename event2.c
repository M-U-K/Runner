/*
** EPITECH PROJECT, 2020
** 12.c
** File description:
** 12.c
*/

#include "my_functions.h"

void event7(data_t *data)
{
    data->menu->button->coord.x = 156*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        if (data->player->actual_act != 90) {
            data->player->actual_act = 90;
            update_player_rect(data);
        }
        data->menu->actual_menu = 69;
    }
    data->menu->button->coord.x = 611*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        data->menu->menu_before_setting = 0;
    }
}

void event8(data_t *data)
{
    data->menu->button->coord.x = 58*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        if (data->player->actual_act != 90) {
            data->player->actual_act = 90;
            update_player_rect(data);
        }
        change_texture_block(data);
        data->menu->actual_menu = 69;
    }
    data->menu->button->coord.x = 434*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
}

void event9(data_t *data)
{
    if (hitbox_button(data)) {
        if (data->player->actual_act != 90) {
            data->player->actual_act = 90;
            update_player_rect(data);
        }
        data->menu->actual_menu = 69;
        data->setting->inf = 1;
        set_inf_block(data);
        update_texture_block(data);
    }
    data->menu->button->coord.x = 815*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        data->menu->menu_before_setting = 1;
    }
}

void event10(data_t *data)
{
    data->menu->button->coord.x = 1194*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 7;
        data->menu->menu_before_setting = 1;
    }
    data->menu->button->coord.x = 1574*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data))
        window_close(data);
    data->menu->button->button_can_pressed = 1;
}

void event11(data_t *data)
{
    data->menu->button->coord.x = 156*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data))
        data->menu->actual_menu = 4;
    data->menu->button->coord.x = 611*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data))
        data->menu->actual_menu = 5;
    data->menu->button->coord.x = 1057*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
}
