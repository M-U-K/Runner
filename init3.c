/*
** EPITECH PROJECT, 2020
** 6.c
** File description:
** 6.c
*/

#include "my_functions.h"

audio_t *init_audio(void)
{
    audio_t *new = malloc(sizeof(audio_t));

    new->cirno = sfMusic_createFromFile("cirno_project_2/audio/cirno.ogg");
    new->flandre = sfMusic_createFromFile("cirno_project_2/audio/flandre.ogg");
    new->jump = sfMusic_createFromFile("cirno_project_2/audio/nya.wav");
    return (new);
}

void init_window2(window_t *new)
{
    sfVector2u size_1920_1080 = {1920, 1080};
    sfVector2u size_1600_900 = {1600, 900};
    sfVector2u size_1280_720 = {1280, 720};
    sfVector2u size_800_600 = {800, 600};

    new->size_1920_1080 = size_1920_1080;
    new->size_1600_900 = size_1600_900;
    new->size_1280_720 = size_1280_720;
    new->size_800_600 = size_800_600;
}

window_t *init_window(void)
{
    window_t *new = malloc(sizeof(window_t));
    sfVector2u org_size = {1, 1};

    new->window = sfRenderWindow_create((sfVideoMode) \
{1920, 1080, 1}, "Cirno Project 2", sfResize | sfClose, NULL);
    init_window2(new);
    new->org_window_x = sfRenderWindow_getSize(new->window).x;
    new->org_window_y = sfRenderWindow_getSize(new->window).y;
    new->window_x = sfRenderWindow_getSize(new->window).x;
    new->window_y = sfRenderWindow_getSize(new->window).y;
    new->org_size.x = new->org_window_x;
    new->org_size.y = new->org_window_y;
    new->resize_x = new->window_x/new->org_window_x;
    new->resize_y = new->window_y/new->org_window_y;
    return (new);
}

cursor_t *init_cursor(void)
{
    cursor_t *new = malloc(sizeof(cursor_t));
    sfVector2f pos_cursor = {0, 0};

    new->pos_cursor = pos_cursor;
    return (new);
}

mtime_t *init_time(void)
{
    mtime_t *new = malloc(sizeof(mtime_t));

    new->clock = sfClock_create();
    new->game_speed = 1;
    new->time = 1;
    return (new);
}
