/*
** EPITECH PROJECT, 2020
** 10.c
** File description:
** 10.c
*/

#include "my_functions.h"

void reset_clock5(data_t *data)
{
    city_t *actual_city = data->map->citylist->first;

    while (actual_city->next) {
        actual_city->diff_time = 0;
        actual_city->actual_time = 0;
        actual_city->past_time = 0;
        actual_city->diff_time_speed = 0;
        actual_city = actual_city->next;
    }

}

void reset_clock(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeyM) && (data->menu->actual_menu == 0 || \
data->menu->actual_menu == 69) && data->menu->button->key_can_pressed == 0 \
&& data->setting->mute_jump == 0) {
        data->setting->mute_jump = 1;
        data->menu->button->key_can_pressed = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyM) && (data->menu->actual_menu == 0 || \
data->menu->actual_menu == 69) && data->menu->button->key_can_pressed == 0 \
&& data->setting->mute_jump == 1) {
        data->setting->mute_jump = 0;
        data->menu->button->key_can_pressed = 1;
    }
    reset_clock5(data);
    reset_clock4(data);
    reset_clock3(data);
    reset_clock2(data);
}

void event1(data_t *data)
{
    if (data->setting->window->window_x != sfRenderWindow_getSize\
(data->setting->window->window).x || data->setting->window->window_y \
!= sfRenderWindow_getSize(data->setting->window->window).y) {
        data->setting->window->window_x = sfRenderWindow_getSize(data->\
setting->window->window).x;
        data->setting->window->window_y = sfRenderWindow_getSize(data->\
setting->window->window).y;
        data->setting->window->resize_x = data->setting->window->window_x/\
data->setting->window->org_window_x;
        data->setting->window->resize_y = data->setting->window->window_y/\
data->setting->window->org_window_y;
    }
    if (data->setting->cursor->pos_cursor.x != sfMouse_getPositionRenderWindow\
(data->setting->window->window).x || data->setting->cursor->pos_cursor.y != \
sfMouse_getPositionRenderWindow(data->setting->window->window).y) {
        data->setting->cursor->pos_cursor.x = sfMouse_getPositionRenderWindow\
(data->setting->window->window).x;
        data->setting->cursor->pos_cursor.y = sfMouse_getPositionRenderWindow\
(data->setting->window->window).y;
    }
}

void event2_2(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeyC) && data->menu->button->key_can_pressed \
== 0 && data->setting->cheat == 0) {
        data->setting->cheat = 1;
        data->menu->button->key_can_pressed = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyC) && data->menu->button->key_can_pressed \
== 0 && data->setting->cheat == 1) {
        data->setting->cheat = 0;
        data->menu->button->key_can_pressed = 1;
    }

}

void event2(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeyM) && (data->menu->actual_menu == 0 \
|| data->menu->actual_menu == 69) && data->menu->button->key_can_pressed \
== 0 && data->setting->mute_jump == 0) {
        data->setting->mute_jump = 1;
        data->menu->button->key_can_pressed = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyM) && (data->menu->actual_menu == 0 \
|| data->menu->actual_menu == 69) && data->menu->button->key_can_pressed \
== 0 && data->setting->mute_jump == 1) {
        data->setting->mute_jump = 0;
        data->menu->button->key_can_pressed = 1;
    }
    event2_2(data);
}
