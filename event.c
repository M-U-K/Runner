/*
** EPITECH PROJECT, 2020
** 11.c
** File description:
** 11.c
*/

#include "my_functions.h"

void event3_2(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && data->menu\
->actual_menu == 69 && data->menu->button->key_can_pressed == 0) {
        data->menu->actual_menu = 0;
        data->player->grav = 1;
        if (data->player->actual_act != 170) {
            data->player->actual_act = 170;
            data->player->actual_pos = 0;
            update_player_rect(data);
        }
        sfClock_restart(data->setting->time->clock);
        reset_clock(data);
        data->menu->button->key_can_pressed = 1;
    }

}

void event3(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && data->menu->actual_menu \
== 0 && data->menu->button->key_can_pressed == 0 && data->player->jump < 2) {
        if (data->setting->mute_jump == 0)
            sfMusic_play(data->setting->audio->jump);
        data->player->grav = -1;
        data->player->diff_time_grav = 0;
        data->player->jump += 1;
        data->player->jump_boost = 3.5;
        data->menu->button->key_can_pressed = 1;
    }
    event3_2(data);
}

void event4(data_t *data)
{
    event1(data);
    if (data->setting->event.type == sfEvtKeyPressed && data->menu\
->button->key_can_pressed == 0) {
        event2(data);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) && (data->menu->\
actual_menu == 0 || data->menu->actual_menu == 69) && data->menu->\
button->key_can_pressed == 0) {
            data->menu->actual_menu = 1;
            data->menu->button->key_can_pressed = 1;
        }
        event3(data);
        data->menu->button->key_can_pressed = 0;
    }
}

void event5(data_t *data)
{
    data->menu->button->coord.x = 1057*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 7;
        data->menu->menu_before_setting = 0;
    }
    data->menu->button->coord.x = 1507*data->setting->window->resize_x;
    data->menu->button->coord.y = 789*data->setting->window->resize_y;
    data->menu->button->lenght.x = 267*data->setting->window->resize_x;
    data->menu->button->lenght.y = 109*data->setting->window->resize_y;
    if (hitbox_button(data)) {
        data->menu->actual_menu = 2;
        restart_map(data);
    }
    data->menu->button->button_can_pressed = 1;
}

void event6(data_t *data)
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
