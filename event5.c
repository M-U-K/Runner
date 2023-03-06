/*
** EPITECH PROJECT, 2020
** 15.c
** File description:
** 15.c
*/

#include "my_functions.h"

void event21(data_t *data)
{
    if (hitbox_button(data)) {
        if (data->setting->audio->actual_music == 0) {
            sfMusic_stop(data->setting->audio->cirno);
            sfMusic_play(data->setting->audio->flandre);
            data->setting->audio->actual_music = 1;
        }
        if (data->menu->menu_before_setting == 1)
            data->menu->actual_menu = 2;
        if (data->menu->menu_before_setting == 0)
            data->menu->actual_menu = 1;
    }
    data->menu->button->button_can_pressed = 1;
}

void event24(data_t *data)
{
    if (data->menu->actual_menu == 6 && data->menu\
->button->button_can_pressed == 0) {
        event17(data);
        event18(data);
        event19(data);
    }
    if (data->menu->actual_menu == 7 && data->menu\
->button->button_can_pressed == 0) {
        event20(data);
        event21(data);
    }

}

void event22(data_t *data)
{
    if (data->menu->actual_menu == 4 && data->menu\
->button->button_can_pressed == 0) {
        event13(data);
        event14(data);
    }
    if (data->menu->actual_menu == 5 && data->menu\
->button->button_can_pressed == 0) {
        event15(data);
        event16(data);
        data->menu->button->button_can_pressed = 1;
    }
    event24(data);
    data->menu->button->button_can_pressed = 0;
}

void event23(data_t *data)
{
    if (data->menu->actual_menu == 1 && \
data->menu->button->button_can_pressed == 0) {
        event6(data);
        event5(data);
    }
    if (data->menu->actual_menu == 2 && \
data->menu->button->button_can_pressed == 0) {
        event7(data);
        event8(data);
        event9(data);
        event10(data);
    }
    if (data->menu->actual_menu == 3 && \
data->menu->button->button_can_pressed == 0) {
        event11(data);
        event12(data);
    }
}

void event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->\
setting->window->window, &data->setting->event)) {
        event4(data);
        if (data->setting->event.type == \
sfEvtMouseButtonPressed &&sfMouse_isButtonPressed(sfMouseLeft)) {
            event23(data);
            event22(data);
        }
        if (data->setting->event.type == sfEvtClosed) {
            window_close(data);
        }
    }
}
