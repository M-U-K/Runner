/*
** EPITECH PROJECT, 2020
** 13.c
** File description:
** 13.c
*/

#include "my_functions.h"

void event12(data_t *data)
{
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data))
        data->menu->actual_menu = 6;
    data->menu->button->coord.x = 1507*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        if (data->menu->menu_before_setting == 1)
            data->menu->actual_menu = 2;
        if (data->menu->menu_before_setting == 0)
            data->menu->actual_menu = 1;
    }
    data->menu->button->button_can_pressed = 1;
}

void event13(data_t *data)
{
    data->menu->button->coord.x = 135*data->setting->window->resize_x;
    data->menu->button->coord.y = 711*data->setting->window->resize_y;
    data->menu->button->lenght.x = 499*data->setting->window->resize_x;
    data->menu->button->lenght.y = 254*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        if (data->map->actual_map != 2)
            data->map->actual_map = 2;
        update_texture_block(data);
    }
    data->menu->button->coord.x = 724*data->setting->window->resize_x;
    data->menu->button->coord.y = 711*data->setting->window->resize_y;
    data->menu->button->lenght.x = 499*data->setting->window->resize_x;
    data->menu->button->lenght.y = 254*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        if (data->map->actual_map != 3)
            data->map->actual_map = 3;
        update_texture_block(data);
    }
}

void event14(data_t *data)
{
    data->menu->button->coord.x = 1308*data->setting->window->resize_x;
    data->menu->button->coord.y = 711*data->setting->window->resize_y;
    data->menu->button->lenght.x = 499*data->setting->window->resize_x;
    data->menu->button->lenght.y = 254*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        if (data->map->actual_map != 1)
            data->map->actual_map = 1;
        update_texture_block(data);
    }
    data->menu->button->button_can_pressed = 1;
}

void event15(data_t *data)
{
    data->menu->button->coord.x = 173*data->setting->window->resize_x;
    data->menu->button->coord.y = 713*data->setting->window->resize_y;
    data->menu->button->lenght.x = 141*data->setting->window->resize_x;
    data->menu->button->lenght.y = 245*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        if (data->player->actual_player != 4)
            data->player->actual_player = 4;
        set_player(data);
    }
    data->menu->button->coord.x = 647*data->setting->window->resize_x;
    data->menu->button->coord.y = 713*data->setting->window->resize_y;
    data->menu->button->lenght.x = 141*data->setting->window->resize_x;
    data->menu->button->lenght.y = 245*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        if (data->player->actual_player != 3)
            data->player->actual_player = 3;
        set_player(data);
    }
}

void event16(data_t *data)
{
    data->menu->button->coord.x = 1109*data->setting->window->resize_x;
    data->menu->button->coord.y = 713*data->setting->window->resize_y;
    data->menu->button->lenght.x = 141*data->setting->window->resize_x;
    data->menu->button->lenght.y = 245*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        if (data->player->actual_player != 2)
            data->player->actual_player = 2;
        set_player(data);
    }
    data->menu->button->coord.x = 1577*data->setting->window->resize_x;
    data->menu->button->coord.y = 713*data->setting->window->resize_y;
    data->menu->button->lenght.x = 141*data->setting->window->resize_x;
    data->menu->button->lenght.y = 245*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 3;
        if (data->player->actual_player != 1)
            data->player->actual_player = 1;
        set_player(data);
    }
}
